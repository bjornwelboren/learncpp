#include <iostream>
using namespace std;

int main(){
  int * foo;
  foo = new int [5];
  foo = new (nothrow) int [5];
  ++(*foo);
       
  if(foo == nullptr){
     cout << "Caught exception" << endl;
     return 1;
  } else {
     cout << foo[0] << endl;  
  }
  
  return 0;

}
