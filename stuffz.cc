#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Dummy{
public:
    int salary = 1700;
    Dummy() {}
    
};

void mystery(const string* casted)
{
    cout << *casted << endl;
}

void reference(int& i)
{
    i++;
}


int main()
{
    int arraySize = 8;
    int * newArray = new int[3];
    ++(*newArray); //Move in value 
    *newArray = 1;
    ++(*newArray);
    ++newArray;
    *newArray = 3;
    cout << *newArray << endl; //3
    --newArray; //Move in memory
    cout << *newArray << endl; //2
    Dummy* dmy = new Dummy; //Standard usage
    auto dmyy = make_unique<Dummy>();//Smart pointer 
    auto dmyyy = make_unique<Dummy[]>(5);
    shared_ptr<Dummy[]> sharedDummy(new Dummy[5]);
    cout << "Shared dummy: " << sharedDummy[0].salary << endl; //Uses reference count for multiple owners, when 0 it frees the pointer
    cout << dmyy->salary << endl;
    dmyyy[1].salary = 5;
    cout << dmyyy[1].salary << endl;
    string mystring = "Bjorn";
    mystery(&mystring);
    int myInt = 0;
    reference(myInt); //myInt + 1, making changes in memory out of the scope of the function
    cout << myInt << '\n';
    return 0;   
}
