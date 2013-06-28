#include <iostream>


int main()
{
	using namespace std; 
	
	int a = 101;
	int& b = a;
	
	cout << " a = " << a << ", b = " << b << endl;
	cout << " a address = " << &a << ", b address = " << &b << endl;
	
	int c = 202;
	b = c;
	cout << " a = " << a << ", b = " << b << ", c = " << c <<endl;
	cout << " c address = " << &c << ", a address = " << &a <<  ", b address = " << &b << endl;
}