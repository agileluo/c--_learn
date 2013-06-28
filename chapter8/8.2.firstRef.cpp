#include <iostream>


int main()
{
	using namespace std;
	
	int a = 101;
	int& b = a;
	
	cout << " a = " << a << ", b = " << b << endl;
	cout << " a address = " << &a << ", b address = " << &b << endl;
	
	b++;
	cout << " a = " << a << ", b = " << b << endl;
	cout << " a address = " << &a << ", b address = " << &b << endl;
}