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
    cout << "Your favorite movie is " << movie.name;
    return 0;
}
