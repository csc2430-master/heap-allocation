#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[]){
	string* pNewStr;
	
	pNewStr = new string;

	*pNewStr = "Hello";

	cout << endl << "- - - - - - - - - - - - - - -" << endl;
	cout << "Showing addresses: " << endl;
	cout << "&pNewStr: " << &pNewStr << endl;
	cout << " pNewStr: " << pNewStr << endl;

	delete pNewStr;
	delete pNewStr;

	return 0;
}
