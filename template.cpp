#include <iostream>
using namespace std;

template <class T>
class Dummy {
	T values[2];
public:
	Dummy (T first, T second)
	{
		values[0]=first; values[1]=second;
	}
	T getmax();
};

template <class T>
T Dummy<T>::getmax(){
    T retval;
    retval = values[0] > values[1] ? values[0] : values[1];
    return retval;
}

int main(){
	Dummy<int> foo (4,1);
	cout << foo.getmax() << endl;
	return 0;
}
