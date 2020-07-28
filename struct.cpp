#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string currency = " euro(s)";
    
    struct jillz {
        double price;
        
    } strawberry, apple;
    
    strawberry.price = 0.90;
    
    if(strawberry.price < 1)
        currency = " cent(s).";
    
    cout << "The jillz strawberry costs: " << strawberry.price << currency << endl;
    
    return 0;
}
