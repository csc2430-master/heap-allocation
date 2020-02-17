#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[]){
	

	string str = "Hello";
	string* pStr = &str;

	cout << endl << "- - - - - - - - - - - - - - -" << endl;
	cout << "Showing addresses: " << endl;
	cout << "&str: " << &str << endl;
	cout << "pStr: " << pStr << endl;

	delete pStr;

	return 0;
}
