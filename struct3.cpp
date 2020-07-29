#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t{
    string name;
    int year;
} films[3];


void printMovie(movies_t movie){
    cout << movie.name << endl;
    cout << movie.year << endl;
}

int main(){
    string year;
    for(int i = 0; i < 3; i++){
        cout << "Favorite movie? ";
        getline(cin, films[i].name);
        cout << "Movie year? ";
        getline(cin, year);
        stringstream(year) >> films[i].year; //Stream the string into an int
    }    
    cout << "You chose these movies:" << endl;
    for(int i = 0; i < 3; i++)
        printMovie(films[i]);
    return 0;

}
