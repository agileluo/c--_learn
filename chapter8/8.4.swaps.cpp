#include <iostream>

void swapr(int& a, int& b);
void swapp(int* a, int* b);
void swap(int a, int b);


int main()
{
	using namespace std; 
	
	int a, b;
	
	a = 17, b = 24;
	cout << "a = " << a << ", b = " << b << endl;
	cout << endl;
	
	cout << "swap use ref" << endl;
	swapr(a, b);
	cout << "Now a = " << a << ", b = " << b << endl;
	cout << endl;
	
	a = 17, b = 24;
	cout << "swap use pointer" << endl;
	swapp(&a, &b);
	cout << "Now a = " << a << ", b = " << b << endl;
	cout << endl;
	
	a = 17, b = 24;
	cout << "swap use normal" << endl;
	swap(a,b);
	cout << "Now a = " << a << ", b = " << b << endl;
	cout << endl;
	
}


void swapr(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}