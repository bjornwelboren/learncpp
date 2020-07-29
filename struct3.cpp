#include <iostream>
#include <string>
#include <sstream>
using namespace std;


struct movies_t{
    string name;
    string platform;
    
    
} films[3];


int main(){
    string platform;
    for(int i = 0; i < 3; i++){
        cout << "Favorite movie? ";
        getline(cin, films[i].name);
        cout << "On which platform is this streamed? ";
        getline(cin, platform);
        stringstream(platform) >> films[i].platform;
    }    
    for(int i = 0; i < 3; i++){
        cout << "Your "<< i + 1 << "(st/rd)" << " movie was: " << films[i].name << endl;
        cout << "Being streamed on: " << films[i].platform << endl;
    }
    
    return 0;
}
