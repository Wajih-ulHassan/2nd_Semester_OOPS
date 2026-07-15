#include <iostream>
using namespace std;
class Logger {
	private:
		static Logger* instance;
		Logger() {
			cout << "Logger initialized (constructor called)" << endl;}
	public:
		Logger(const Logger&) = delete;
		static Logger* getInstance() {
			if (instance == nullptr) {
				instance = new Logger();}
			return instance;}
		void log(string message) {
			cout << "LOG: " << message << endl;}};
Logger* Logger::instance = nullptr;
int main() {
	Logger* l1 = Logger::getInstance();
	Logger* l2 = Logger::getInstance();
	l1->log("First message");
	l2->log("Second message");
	cout << "Address of l1: " << l1 << endl;
	cout << "Address of l2: " << l2 << endl;
	if (l1 == l2) {
		cout << "Only ONE instance exists (Singleton confirmed)" << endl;}
	else {
		cout << "Different instances exist (Error)" << endl;	}
	return 0;
	}