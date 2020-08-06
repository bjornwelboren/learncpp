#include <iostream>
using namespace std;


class Circle{
    int heightValue;
public:
    Circle();
    Circle(int);
    int height(){return heightValue;};
};

Circle::Circle() : heightValue(1337) {}
Circle::Circle(int x) : heightValue(x) {}


int main(){
    
    Circle circle {4};
    cout << circle.height();

    return 0;
}
