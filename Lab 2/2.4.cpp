#include <iostream>
using namespace std;

class Book {
	private:
		int bookID;
		float price;

	public:
		void input();
		void display() const;
		int getID() const;
	};

void Book::input() {
	cout << "Enter book ID: ";
	cin >> bookID;

	cout << "Enter price: ";
	cin >> price;
	}

void Book::display() const {
	cout << "Book ID: " << bookID << endl;
	cout << "Price: " << price << endl;
	}

int Book::getID() const {
	return bookID;
	}

int main() {
	Book books[6];

	cout << "\n---------------Enter data for 6 books---------------\n";
	for (int i = 0; i < 6; i++) {
		cout << "\nBook " << i + 1 << ":\n";
		books[i].input();
		}

	int searchID;
	cout << "Enter book to search: ";
	cin >> searchID;

	bool found = false;
	for (int i = 0; i < 6; i++) {
		if (books[i].getID() == searchID) {
			cout << "\nFound Book\n";
			books[i].display();
			found = true;
			break;
			}
		}

	if (!found) {
		cout << "\nBook does not exist.\n";
		}

	return 0;
	}