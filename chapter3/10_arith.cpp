#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float a;
	float b;
	
	cout << "Enter a number: " ;
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;
	cout << " a = " << a << ", b = " << b << endl;
	cout << " a + b = " << a + b << endl;
	cout << " a - b = " << a - b << endl;
	cout << " a * b = " << a * b << endl;
	cout << " a / b = " << a / b << endl;
}