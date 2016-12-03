#include <iostream>

using namespace std;

class printData{
	public:
		void print(int i){
			cout << "Printing int: " << i << endl;
		}
		
		void print(double f){
			cout << "Printing float: " << f << endl;
		}
		
		void print(char *str){
			cout << "Printing a string: " << str << endl;
		}
};

int main(void){
	printData pd;

	// Using the overriden methods:
	pd.print(5);
	pd.print(5.55555);
	pd.print("Hello World!");
	
	return 0;
}
