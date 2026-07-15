#include <iostream>
#include <string>
using namespace std;

class DBC {
	private:
		static DBC* instance;

		DBC() {
			cout << "Connection Established" << endl;
			}

	public:
		static DBC* getInstance() {
			if (!instance)
				instance = new DBC();

			return instance;
			}

		void query(string q) {
			cout << "Executing: " << q << endl;
			}
	};

DBC* DBC::instance = nullptr;

int main() {
	DBC* db1 = DBC::getInstance();
	DBC* db2 = DBC::getInstance();

	db1->query("SELECT * FROM Students");

	cout << (db1 == db2 ? "Same" : "Different")
	     << " instance" << endl;

	return 0;
	}