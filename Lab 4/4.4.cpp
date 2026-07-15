#include <iostream>
using namespace std;

class User {
	private:
		string password;

	public:
		void setPassword(string p) {
			password = p;
			}

	};

int main() {

	User U;

	U.setPassword("Div123@");
	cout<<"Password has been successfully set!"<<endl;

	return 0;
	}