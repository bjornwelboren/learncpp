#include <iostream>
using namespace std;

void methodOne();
void methodTwo();

int main(){
  testMethodOne();
}

void testMethodOne(){
  //Short version
  int a;
  int ptr (*(&a) = 10); 
  cout << a;
}

void testMethodTwo(){
  //Fully written
  int a;
  int * ptr;
  ptr = &a;
  *ptr = 20;
  cout << a;
}
