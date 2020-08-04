#include <iostream>
using namespace std;

class Rectangle{
    float width, height;
public:
    Rectangle(float, float); //Constructor
    int area(){ return width*height;};
    
};

Rectangle::Rectangle(float x, float y){
    width = x;
    height = y;
}

int main(){
    
    Rectangle rx(2, 668.5);
    cout << rx.area() << endl;
    Rectangle rx2(2, 333);
    cout << rx2.area() << endl;
    
    
    return 0;
    
}
