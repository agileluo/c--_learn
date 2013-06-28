#include <iostream>

template<typename Any>
void swap(Any& a, Any& b);

int main()
{
	
	int i = 17;
	int j = 24;
	std::cout << "i = " << i << ", j = " << j << std::endl;
	swap(i,j);
	std::cout << "Now i = " << i << ", j = " << j << std::endl;
	
	double x = 86.5;
	double y = 144.4;
	std::cout << "x = " << x << ", y = " << y << std::endl;
	swap(x,y);
	std::cout << "Now x = " << x << ", y = " << y << std::endl;	
	
}

template<typename Any>
void swap(Any& a, Any& b){
	Any temp;
	temp = a;
	a = b;
	b = temp;
}