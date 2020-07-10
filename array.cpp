#include <array>
#include <iostream>
#include "main.h"
using namespace std;

int main() {


	int exampleArray[]{ 1,2,3 };
	printarray(exampleArray, 3);

	array<int, 10> exampleArray1{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "Array of size: " << exampleArray1.size() << endl;
	for (int elem : exampleArray1)
		cout << elem << endl;

	return 0;
}

void printarray(int arg[], int length) {
	for (int i = 0; i < length; ++i)
		cout << arg[i] << endl;
	cout << '\n' << endl;
}
