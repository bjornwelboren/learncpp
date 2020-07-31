#include <iostream>
using namespace std;
using nr = int;


union mytypes_t{
    nr c;
    char a;
    float b;
    
} mytype;


int main(){
  mytype.c = 1;
  mytype.a = 'A';
  mytype.b = 1.0;
  cout << mytype.c << endl;
  cout << mytype.a << endl;
  cout << mytype.b << endl;
  
  return 0;
}

