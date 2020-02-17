#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[]){

	int* array = nullptr;
	
	array = new int[100];

	delete array;

	for (size_t i = 0; i < 100; i++)
		array[i] = 2;


	return 0;
}
