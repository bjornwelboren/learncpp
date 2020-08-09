#include <iostream>
using namespace std;


class CVector{
    public:
	int x, y;
	CVector() {}
	CVector(int a, int b) : x(a), y(b) {}
};


CVector operator+ (const CVector& first, const CVector& second){
	CVector temp;
	temp.x = first.x + second.x;
	temp.y = first.y + second.y; 
	return temp;
}


int main(){

	CVector first(3, 4);
	CVector second(3, 4);
	CVector result;
	result = first + second;
	cout << result.x << "," << result.y << endl;
	return 0;
}
