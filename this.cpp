#include <iostream>
using namespace std;


class Dummy{
public:
  bool isitme(Dummy& param);
};

bool Dummy::isitme(Dummy& param){
  if(&param == this) return true;
  else return false;
}

int main(){

  Dummy foo;
  Dummy * ptr;
  ptr = &foo;
  if(ptr->isitme(foo)){
    cout << "Yes its me " << endl;
  } else {
    cout << "Nope it isnt" << endl;
  }

  return 0;
}
