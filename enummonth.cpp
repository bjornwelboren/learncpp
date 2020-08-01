#include <iostream>
using namespace std;

enum months_t{january=1, february, march, april} y2k;

int main(){
    
    months_t month;
    month = february;
    cout << month << endl; //2 
    
    y2k = january;
    cout << january << endl;
    
    return 0;
}
