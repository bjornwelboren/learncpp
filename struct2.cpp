#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#define KaliYuga 2025

struct beverage{
    string flavour;
    int expireDate = KaliYuga;

} jillz, starbucks;

void printFavorite(beverage beverage);

int main(){
    
    string defaultFlavour = "apple";
    
    cout << "What is your favorite kind of starbucks drink? ";
    getline(cin, starbucks.flavour);
    
    cout << "What is your favorite jillz drink? ";
    getline(cin, defaultFlavour);
    stringstream(defaultFlavour) >> jillz.flavour;

    printFavorite(starbucks);
    printFavorite(jillz);

    return 0;
}


void printFavorite(beverage beverage){
    cout << "[" << beverage.flavour << "]" << endl;
    cout << "Expires in " << beverage.expireDate << endl;;
}
