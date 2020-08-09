#include <iostream>
using namespace std;

class Dummy{
public:
  bool isitme(Dummy& param);
};

Dummy::isitme(Dummy& param){
  if(&param == this) return true;
  else return false;
}

int main(){
  Dummy a;
  Dummy *b;
  b = &a;
  if(b->isitme(a)) cout << "Yes &a is b" << endl;
}
