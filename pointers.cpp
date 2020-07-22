#include <iostream>
using namespace std;

void shortWay();
void longWay();
void messing();
void z();

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

void z(){
  //Ways of iterating through an array via memory and pointers
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
}
