#include <iostream>
using namespace std;
using number = int;
typedef int * pint;

int main(){
  number a = 2;
  pint b = &a;
  cout << *b << endl;
  return 0;
}

