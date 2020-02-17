#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[]){

	int* array = new int[5];
	for (size_t i = 0; i < 5; i++)
		array[i] = 2;

	delete array;

	return 0;
}
