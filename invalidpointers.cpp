#include <iostream>
using namespace std;

int main(){
  // Pointing to random memory will not cause an error, dereferencing will
  
  int * p; // uninitialised pointer
  
  int myarray[10];
  int * q = myarray + 20; // out of boundary


}
