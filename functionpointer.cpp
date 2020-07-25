#include <iostream>
using namespace std;

int subtraction(int a, int b){return (a - b);};
int operation(int a, int b, int(*functocall)(int,int)){
	int g;
	g = (*functocall)(a, b);
	return (g);
};

int main(){
  	int a;
	int(*minus)(int,int) = subtraction;
  	a = operation(999,333, minus);
	cout << a;
}
