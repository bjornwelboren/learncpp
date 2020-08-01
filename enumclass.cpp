#include <iostream>
using namespace std;

enum class Colors { black, white, blue } gg;


//White becomes black
Colors method1(Colors a){
    return (a == Colors::white) ? Colors::black : Colors::white;
}


int main(){
   
   if(method1(Colors::black) == Colors::black) cout << "White to black" << endl;
   else cout << "Other color to white" << endl;
   
   return 0;
}

