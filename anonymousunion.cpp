#include <iostream>
using namespace std;

struct {
  union {
    int a;
  }

} stru;

int main(){
  stru.a = 1;
  
  cout << stru.a << endl;
  
  return 0;

}
