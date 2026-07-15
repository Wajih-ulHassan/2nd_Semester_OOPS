#include <iostream>
using namespace std;

class Book {
	private:
		string title;
		string author;
		string isbn;

	public:

		Book (string t, string a, string i) {
			title = t;
			author = a;
			isbn = i;
			}

		string getTitle() {
			return title;
			}

		string getAuthor() {
			return author;
			}

		string getisbn() {
			return isbn;
			}
	};

int main() {

	Book b1("OOPS", "Waji", "149");
	Book b2("Expository Writing", "Sara", "212");
	Book b3("Pharmacy Learning", "Noor e Fatima", "11");

	cout<<"\n\n____________BOOK DETAILS____________\n";

	cout<<"\n--------BOOK 1--------\n";
	cout<<b1.getTitle()<<endl;
	cout<<b1.getAuthor()<<endl;
	cout<<b1.getisbn()<<endl;

	cout<<"\n--------BOOK 2--------\n";
	cout<<b2.getTitle()<<endl;
	cout<<b2.getAuthor()<<endl;
	cout<<b2.getisbn()<<endl;

	cout<<"\n--------BOOK 3--------\n";
	cout<<b3.getTitle()<<endl;
	cout<<b3.getAuthor()<<endl;
	cout<<b3.getisbn()<<endl;

	return 0;

	}