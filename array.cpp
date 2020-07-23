#include <array>
#include <iostream>
#include "main.h"
using namespace std;

void incrementArray();


int main() {


	int exampleArray[]{ 1,2,3 };
	printarray(exampleArray, 3);

	array<int, 10> exampleArray1{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "Array of size: " << exampleArray1.size() << endl;
	for (int elem : exampleArray1)
		cout << elem << endl;
	ptrArray();

	return 0;
}

void printarray(int arg[], int length) {
	for (int i = 0; i < length; ++i)
		cout << arg[i] << endl;
	cout << '\n' << endl;
}

void ptrArray(){
      int array[3];
      int * p;
      cout << array << endl;
      p = array;
      *p = 6;
      ++p;
      *p = 6;
      ++p;
      *p = 6;
      for ( int elem : array ) 
        cout << elem << endl;
}

void fillPtrArray(){
	int array[3];
	int * p;
	int i = 0;
	while ( i < 3 ) {
		p = array + i;
		*p = 6;
		++i;
	}
	for ( int elem : array ) {
		cout << elem << endl;	
	}
}
	
void forLoopFill(){
     int array[3];
     int * p;
     for ( int i = 0; i < 3; ++i){
         p = array + i;
         *p = 6;
         cout << array[i] << endl;
     }	
}

void incrementArray(){
    const char * foo = "hello";
    cout << *foo; //h
    ++foo;
    cout << *foo; //e
    ++foo;
    cout << *foo; //l
    cout << *(foo+1) << endl; //l
	
}
