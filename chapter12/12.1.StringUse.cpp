
#include <iostream>
#include "12.1.String.h"

void callme1(String& str);
void callme2(String str);

int main()
{
	using std::cout;
	using std::endl;
	
	String headline1("Welcome to china");
	String headline2("The best program language");
	String language("java, ruby, groovy, c++");
	
	cout << "headline1: " << headline1 << endl;
	cout << "headline2: " << headline2 << endl;
	cout << "language: " << language << endl;
	
	callme1(headline1);
	cout << "headline1: " << headline1 << endl;
	callme2(headline2);
	cout << "headline2: " << headline2 << endl;

	cout << "Initialize one object to other: \n";
	String other = language;
	cout << "other: " << other << endl;
	cout << "Assign one object to another: \n";
	String another;
	another = headline1;
	cout << "another: " << another << endl;
	cout << "Done\n";
	
	return 0;
}


void callme1(String& str){
	std::cout << "String passed by reference:\n";
	std::cout << "  \"" << str << "\"\n";
}
void callme2(String str){
	std::cout << "String passed by value:\n";
	std::cout << "  \"" << str << "\"\n";
}