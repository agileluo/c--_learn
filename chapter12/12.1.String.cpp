#include <iostream>
#include <cstring>
#include "12.1.String.h"

using std::cout;

int String::num_strings = 0;

String::String(const char* s){
	int len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" object created\n";
}

String::String(){
	str = new char[4];
	std::strcpy(str,"c++");
	str[3] = '\0';
	num_strings++;
	cout << num_strings << ": \"" << str << "\" default object created\n";
}

String::~String(){
	cout << "\"" << str << "\" object deleted, "
		<< --num_strings << " left\n";
	delete [] str;
}

std::ostream & operator<< (std::ostream& os, const String& str){
	os << str.str;
	return os;
}