#include <iostream>
using namespace std;


int main(){
    int n;
    int * p;
    cout << "How many numbers" << endl;
    cin >> n;
    p = new (nothrow) int [n];
    if (p == nullptr){
        cout << "Memory could not be allocated." << endl;
    } else {
        for(int i = 0; i < n; i++)
        {
            cout << "Enter number: ";
            cin >> p[i];
        }
        cout << "You have entered ";
        for (int i = 0; i < n; i++)
            cout << p[i] << ", ";
        delete[] p;

        return 0;
    }
}
