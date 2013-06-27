#include <iostream>

void coutDown(int n);

int main()
{
	coutDown(5);
}

void coutDown(int n){
	using namespace std;
	cout << "Counting down... " << n << " ( n at " << &n << " )" << endl;
	if(n > 0){
		coutDown(n-1);
	}
	cout << n << "Up... " << n << " ( n at " << &n << " )" << endl;
}
