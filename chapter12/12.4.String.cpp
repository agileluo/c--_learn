#include <iostream>
#include <cstring>
#include "12.4.String.h"

int String::num_strings = 0;

int String::howMany(){
	return num_strings;
}

String::String(const char* s){
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str, s);
	num_strings++;
}
String::String(){
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const String& s){
	len = s.len;
	str = new char[len+1];
	std::strcpy(str, s.str);
	num_strings++;
}

String::~String(){
	num_strings--;
	delete [] str;
}
String& String::operator=(const String& s){
		if(this == &s){
			return *this;
		}
		delete [] str;
		len = s.len;
		str = new char[len+1];
		std::strcpy(str, s.str);
		return *this;
}
String& String::operator=(const char* s){
	delete [] str;
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str, s);
	return *this;
}
char& String::operator[](int i){
	return str[i];
}
const char& String::operator[](int i)const{
	return str[i];
}

bool operator<(const String& str, const String& str2){
	return (std::strcmp(str.str, str2.str) < 0);
}
bool operator>(const String& str, const String& str2){
	return str2 < str;
}
bool operator==(const String& str, const String& str2){
	return std::strcmp(str.str, str2.str) == 0;
}
ostream& operator<<(ostream& os, const String& str){
	os << str.str;
	return os;
}
istream& operator>>(istream& is, String& str){
	char temp[String::LIMIT];
	is.get(temp, String::LIMIT);
	if(is){
		str = temp;
	}
	while(is && is.get() != '\n'){
		continue;
	}
	return is;
}
	
