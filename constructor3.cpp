#include <iostream>
using namespace std;

class Circle{
    int area;
public:
    Circle();
    Circle(int);
    int printOut(){ return area; };    
};

Circle::Circle() : area(666) {} 
Circle::Circle(int x) : area(x) {} 

int main(){
    int x = 10;
    Circle c(x);
    cout << c.printOut() << endl;
    
    return 0;
}
