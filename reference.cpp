#include <string>
#include <iostream>
using namespace std;


void call(int& a){ //Changes value of a in main because of the reference &
    a = 5;
}

int main(){
    int a = 3;
    call(a);
    cout << a << endl;
    return 0;
}
