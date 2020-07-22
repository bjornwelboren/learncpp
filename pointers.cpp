#include <iostream>
using namespace std;

void shortWay();
void longWay();
void messing();

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

void messing(){
  int randomValue (10);
  int randomValue2 (20);
  int * ptr;
  ptr = &randomValue2;
  *ptr = 1337;
  *(&randomValue) = 20;
  cout << randomValue << endl << randomValue2 << endl; // 20 1337 
}
