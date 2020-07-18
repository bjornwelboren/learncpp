#include <iostream>
using namespace std;

void shortWay();
void longWay();

int main(){
  shortWay();
}

void shortWay(){
  int a;
  int ptr (*(&a) = 10); 
  cout << a;
}

void longWay(){
  int a;
  int * ptr;
  ptr = &a;
  *ptr = 20;
  cout << a;
}
