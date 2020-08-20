#include <iostream>
#include <string>
using namespace std;

void castIt(const string* casted)
{
  cout << "string casted to const string: " << *casted << endl;
}

int main()
{
  string mystring = "Bjorn";
  castIt(&mystring);
  return 0;
}
