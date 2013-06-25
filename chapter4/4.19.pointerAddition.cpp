#include <iostream>

int main()
{
	using namespace std;
	
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };
	
	double* pw = wages;
	short* ps = &stacks[0];
	
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "add 1 to pw pointer" << endl;
	pw += 1;
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	
	cout << endl;
	
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	cout << "add 1 to ps pointer" << endl;
	ps += 1;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	
	cout << endl;
	
	cout << "access two elements with array notation" << endl;
	cout << "stacks[0] = " << stacks[0] << ", stack[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation" << endl;
	cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
	
	cout << endl;
	
	cout << sizeof(wages) << " = size of wages array" << endl;
	cout << sizeof(pw) << " = size of pw pointer" << endl;
	
}