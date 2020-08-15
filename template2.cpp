#include <iostream>
using namespace std;

template <>
class mycontainer <char> {
    char element;
  public:
    mycontainer (char arg) {element=arg;}
    char uppercase ()
    {
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};

int main () {
  mycontainer<char> mychar ('j');
  cout << mychar.uppercase() << endl;
  return 0;
}
