#include <iostream>

int main()
{
	using namespace std;
	
	int* pt = new int;
	*pt = 1001;
	cout << "int value = " << *pt << ", location = " << pt << endl;
	
	double* pd = new double;
	*pd = 1001.001;
	cout << "double value = " << *pd << ", location = " << pd << endl;
	
	cout << "size of pt = " << sizeof(pt) << ", size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd) << ", size of *pd = " << sizeof(*pd) << endl;
		
}