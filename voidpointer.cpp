#include <iostream>
using namespace std;

void increase(void* data, int psize){
    if(psize == sizeof(char)){
        char * pchar;
        pchar = (char*)data;
        *pchar = *pchar - 23;     
    }   
}


int main(){
    char a = 'x';
    increase(&a, sizeof(a));
    cout << a << endl;
    return 0;
    
}


