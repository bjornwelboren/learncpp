#include <iostream>
using namespace std;

class Dummy{
public:
	int x;
	Dummy(int a) : x(a) {}
	int get(){return x;};
};


int main(){

	const Dummy a(5);
	//a.x = 5; causes an error because its read only because of the const
	cout << a.x << endl;

	return 0;
}
