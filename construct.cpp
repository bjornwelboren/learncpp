#include <iostream>
using namespace std;


class Circle{
    int heightValue;
public:
    Circle(int);
    int height(){return heightValue;};
};


Circle::Circle(int x){
    heightValue = x;
}


int main(){
    
    Circle circle(3);
    cout << circle.height() << endl;
    

    return 0;
}
