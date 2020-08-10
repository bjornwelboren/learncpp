#include <iostream>
using namespace std;

class Dummy{
public:
    static int n;
    Dummy() { n++; };
};

int Dummy::n = 0;


int main(){
    
    Dummy a; //1
    Dummy b; //2
    Dummy c; //3
    Dummy d[663];
    
    cout << Dummy::n << endl;
        
    return 0;
}
