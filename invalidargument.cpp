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
       divideNumbers(4,0);
    }
    catch(const invalid_argument& exception)
    {
        cout << "Error received: " << exception.what() << endl;
    }
    
    return 0;
}
