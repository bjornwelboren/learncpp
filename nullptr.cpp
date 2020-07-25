#include <iostream>
using namespace std;

int main(){
    //nullptrs    
    int * p = nullptr;
    int * z = 0;
    int * c = NULL;
    
    if (p == z && z == c){
        cout << "All values are the same";
        
    } else {
  
        cout << "False";
    }
    
    return 0;
}
