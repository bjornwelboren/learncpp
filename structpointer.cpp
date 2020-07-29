#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t{
    string name;
    int year;
} movie;


int main(){
    movies_t movie;
    movies_t * pmovie;
    pmovie = &movie;
    cout << "Favorite Movie ? ";
    getline(cin, pmovie->name);
    //same as (*pmovie).name

    //'*pmovie.name' or '*(pmovie.name)' is not possible because name is not a pointer type
    cout << "Your favorite movie is " << movie.name;
    return 0;
}
