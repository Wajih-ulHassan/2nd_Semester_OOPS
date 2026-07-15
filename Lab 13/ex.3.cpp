#include <iostream>
using namespace std;

template <typename T>
class print{
	public:
		void show (T val){
			cout<<"Genric  "<<val<<endl;
		}
};
//Full Specialization for bool

template<>
class print <bool>{
	public:
		void show (bool val){
			cout<<"Bool  "<<(val ? "true":"false")<<endl;
		}
};

int main(){
	print <int> p1; p1.show(42);
	print <bool> p2; p2.show(true);
	
	return 0;
}