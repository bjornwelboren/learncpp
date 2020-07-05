#include <iostream>
#include <string>

using namespace std;

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

	vsay(1);

	//Note that y is not hidden in the inner block, and thus accessing y still accesses the outer variable.

	{
		int x = 1;
		int y = 0;
		cout << x << endl;
		{
			int x = 2;
			y = 6;
			cout << x << endl;

			{
				int x = 3;
				cout << x << endl;
			}
		}
		cout << y << endl; // Did the inner scope change the value of the outer scope variable?
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
