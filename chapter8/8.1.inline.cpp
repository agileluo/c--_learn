#include <iostream>

inline double square(double x) { return x * x; };

int main()
{
	using namespace std;
	int a = square(5.0);
	int b = square(4.5 + 7.5);
	int c = 13.0;
	
	cout << "a = " << a  
		 << ",b = " << b << endl;
	cout << "c = " << c << ", c squared = " << square(c++) << endl;
	cout << "now c = " << c << endl;
}