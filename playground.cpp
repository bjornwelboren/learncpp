#include <iostream>
#include <string>
#include "concol.h"

using namespace std;
using namespace eku;

void say(string);
void vsay(int);


template <class T, class U>
bool are_equal(T a, U b)
{
	return(a == b);
}


template <class T, int c>
T randomFunc(T a) {
	return a + c;
}


int main() {
	concolinit();
	vsay(1);
	//Note that y is not hidden in the inner block, and thus accessing y still accesses the outer variable.
	{
		settextcolor(red);
		int x = 1;
		int y = 0;
		cout << "\nOuter scope x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "End of outer scope\n\n";
		{
			settextcolor(white);
			int x = 2;
			y = 6;
			cout << "Inner scope x = " << x << endl;
			cout << "Changing outer scope variable y to 6 inside the inner scope." << endl;
			cout << "End of inner scope\n\n";
			{
				settextcolor(blue);
				int x = 3;
				cout << "Nested Inner scope x = " << x << endl;
				cout << "End of nested inner scope\n\n";

			}
		}
		settextcolor(red);
		cout << "Printing outer scope y = " << y << endl; // Did the inner scope change the value of the outer scope variable?
	}

	if (are_equal<int, int>(10, 10)) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not Equal" << endl;
	}

	//                 T,   c,  a
	cout << randomFunc<int, 20>(30) << endl;

	return 0;

}


void say(string text) {
	cout << text << endl;
}


void vsay(int option) {
	switch (option) {
	case 1:
		cout << "Clear" << endl;
		break;
	case 2:
		cout << "I got it" << endl;
		break;
	case 3:
		cout << "Man down!" << endl;
		break;
	case 4:
		cout << "Fire The Hole!" << endl;
		break;
	default:
		break;
	}



}
