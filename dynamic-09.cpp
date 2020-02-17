#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[]){
	int* pArray1 = nullptr;
	int* pArray2 = nullptr;

	pArray1 = new int[3];
	delete[] pArray1;
	pArray1 = nullptr;

	pArray2 = new int[3];
	cout << "Before modifying pArray1" << endl;
	for (size_t i = 0; i < 3; i++)
		cout << "pArray2[ " i << "] = " << pArray2[i] << endl;
	
	for (size_t i = 0; i < 3; i++)
		pArray1[i] = 5;
	
	cout << "After modifying pArray1" << endl;
	for (size_t i = 0; i < 3; i++)
		cout << "pArray2[ " i << "] = " << pArray2[i] << endl;

	delete[] pArray2;

	return 0;
}
