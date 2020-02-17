#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int globalVariable;

int main(int argc, char* argv[]){
	string localVariable = "I Love the way He loves me";
	for (size_t i=0; i < 5; i++)
		cout << localVariable << endl;
	cout << endl << "- - - - - - - - - - - - - - - - - -" << endl;
	cout << "Variable Addresses: " << endl;
	cout << "Global: " << &globalVariable << endl;
	cout << " Local: " << &localVariable << endl;
	return 0;
}
