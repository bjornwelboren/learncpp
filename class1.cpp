#include <iostream>
using namespace std;


class Rectangle {
    int width, height;
public:
    int area() {return width*height;}
    void set_values(int,int);
} rect;


void Rectangle::set_values(int x, int y){
    width = x;
    height = y;
}


int main(){
    rect.set_values(333,2);
    cout << rect.area() << endl;
    
    return 0;
}
