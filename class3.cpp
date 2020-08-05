#include <iostream>
using namespace std;


class Circle{
    int radius;
public:
    Circle(double x){ radius = x; };
    int printRadius(){ return radius; };
} ;

int main(){
    
    Circle c = {54};
    
    //Uniform initialization, ways to address the constructor
    //Circle c = 54;
    //Circle c(54);
    //Circle c {54};
    
    cout << c.printRadius() << endl;

    return 0;
}
