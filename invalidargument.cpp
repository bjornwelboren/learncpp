#include <iostream>
#include <stdexcept>
using namespace std;

double divideNumbers(double a, double b)
{
    if(b == 0) throw invalid_argument("Denominator cannot be 0");
    return a/b;
}

int main()
{
    try
    {
       cout << divideNumbers(1332,2) << endl;
       cout << divideNumbers(4,0) << endl;
       cout << divideNumbers(6,2) << endl;
    }
    catch(const invalid_argument& exception)
    {
        cout << "Error received: " << exception.what() << endl;
    }
    
    return 0;
}
