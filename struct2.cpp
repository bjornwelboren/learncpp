#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct beverage{
    string flavour;
    int expireDate;

} jillz, starbucks;



int main(){
    
    string defaultFlavour = "apple";
    
    cout << "What is your favorite kind of starbucks drink? ";
    getline(cin, starbucks.flavour);
    
    cout << "What is your favorite jillz drink? ";
    getline(cin, defaultFlavour);
    stringstream(defaultFlavour) >> jillz.flavour;

    cout << starbucks.flavour << endl;
    cout << jillz.flavour << endl;

    return 0;
}
