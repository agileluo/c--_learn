#include <iostream>
#include "11.1.time.h"


int main()
{
	using std::cout;
	using std::endl;
	
	Time planning;
	Time coding(4, 30);
	Time fixing(1, 50);
	Time total;
	
	cout << "planning time: "; 
	planning.show();
	cout << endl;
	
	
	cout << "coding time: "; 
	coding.show();
	cout << endl;
	
	cout << "fixing time: "; 
	fixing.show();
	cout << endl;
	
	total = coding + fixing;
	cout << "coding + fixing time: "; 
	total.show();
	cout << endl;
	
	Time morefixing(3, 28);
	cout << "morefixing time: "; 
	morefixing.show();
	cout << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) time: "; 
	total.show();
	cout << endl;
	
	Time lessfixing(2, 55);
	cout << "lessfixing time: "; 
	lessfixing.show();
	cout << endl;
	total = total - lessfixing;
	cout << "total - lessfixing time: "; 
	total.show();
	cout << endl;
}