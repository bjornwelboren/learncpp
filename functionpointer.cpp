#include <iostream>
using namespace std;

int addition(int a, int b){
    return (a+b);
}

int subtraction(int a, int b){
    return (a-b);
}

// handles a function
int operation(int a, int b, int (*functocall)(int, int)){
    int g;
    g = (*functocall)(a,b);
    return (g);
}

int main(){
    int a, b;
    a = operation(10,5, subtraction); 
    b = operation(10,5, addition); 
    cout << a << endl << b << endl;
    
}

