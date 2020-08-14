#include <iostream>
using namespace std;

class Dummy{
    int x;
public:
    static int n;
    Dummy() { n++; };
	Dummy(int a) : x(a) {}
	bool isitme(Dummy& param);
	const int& get() const { return x; };
	int& get () { return x; };
};

int Dummy::n = 0;

bool Dummy::isitme(Dummy& param){
	if(&param == this) return true;
	else return false;
}

int main(){
	
	Dummy foo(1);
	Dummy ab; //n++
	Dummy cd; //n++
	Dummy * ptr;
	ptr = &foo;
	if(ptr->isitme(foo)) cout << "Its me" << endl;
	else cout << "N" << endl;
	cout << "Times Dummy() obj created (without arg): " << Dummy::n << endl;
	
	return 0;
}
