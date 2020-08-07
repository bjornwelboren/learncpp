#include <iostream>
using namespace std;

class Circle{
    int width;
public:
    Circle();
    Circle(int x) : width(x) {}
    int print(){return width;};
};

Circle::Circle(){
    width = 500; //Default   
}

int main(){
    
    Circle obj(666);
    Circle * a, * b, * c;
    a = &obj;
    b = new Circle(1337);
    c = new Circle[3]{{16}, {04}, {1996}};
    cout << a->print() << endl;
    cout << b->print() << endl;
    cout << c[0].print() << " ";
    cout << c[1].print() << " ";
    cout << c[2].print();
    delete b;
    delete[] c;

    return 0;
    
}

