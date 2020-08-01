#include <iostream>
using namespace std;

enum class Color { Red, Green, Blue };
enum class People { Good, Bad };
    
int main()
{

    Color x = Color::Green;
    
    int Green = 10;
    
    if (x == Color::Red)
        cout << "Its Red" << endl;
    else
        cout << "Its not Red" << endl;
        
    People p = People::Good;

    if (p == People::Bad)
        cout << "Bad person" << endl;
    else 
        cout << "Good person" << endl;
        
        
    return 0;
    
}
