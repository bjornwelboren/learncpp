#include <iostream>
using namespace std;


class Circle{
    int heightValue;
public:
    Circle();
    Circle(int);
    int height(){return heightValue;};
};

Circle::Circle(){ //Default value
    heightValue = 1337;
}

Circle::Circle(int x){ //Optional value to set the height as
    heightValue = x;
}


int main(){
    
    Circle circle;
    cout << circle.height() << endl;
    

    return 0;
}
