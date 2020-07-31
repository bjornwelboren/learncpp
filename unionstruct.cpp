#include <iostream>
using namespace std;
using number = int;

union x {
  struct {
    number a;
    char b;
    float c;
  } y;
} x;


int main(){
  x.y.a = 1;
  x.y.b = 'a';
  x.y.c = 3.0;
  cout << x.y.a << endl << x.y.b << endl << x.y.c << endl;
  return 0;
}
