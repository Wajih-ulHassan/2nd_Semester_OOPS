#include <iostream>
using namespace std;
class Student {
	private:
		string name;
		int id;
		static int count;
	public:
		Student(string n, int i) {
			name = n;
			id = i;
			count++;
			}
		static void showCount() {
			cout << "Total Students created: " << count << endl;
			}
		void display() {
			cout << "Name: " << name << ", ID: " << id << endl;
			}};
int Student::count = 0;
int main() {
	Student s1("Waji", 40);
	Student s2("ZABI", 04);
	Student s3("Ekhab", 400);
	s1.display();
	s2.display();
	s3.display();
	Student::showCount();
	return 0;
	}