#include "13.13.dma.h"
#include <iostream>
#include <cstring>

BaseDMA::BaseDMA(const char* s, int r) {
	label = new char[std::strlen(s) + 1];
	std::strcpy(label, s);
	rating = r;
}
BaseDMA::BaseDMA(const BaseDMA& bd) {
	label = new char[std::strlen(bd.label) + 1];
	std::strcpy(label, bd.label);
	rating = bd.rating;
}

BaseDMA::~BaseDMA() {
	delete[] label;
}

BaseDMA& BaseDMA::operator=(const BaseDMA& bd) {
	if (this == &bd) {
		return *this;
	} else {
		delete[] label;
		label = new char[std::strlen(bd.label) + 1];
		std::strcpy(label, bd.label);
		rating = bd.rating;
		return *this;
	}
}
std::ostream & operator<<(std::ostream& os, const BaseDMA& bd) {
	os << "Label: " << bd.label << std::endl;
	os << "Rating: " << bd.rating << std::endl;
	return os;
}
LocksDMA::LocksDMA(const char* c, const char* s, int r) :
		BaseDMA(s, r) {
	int length = std::strlen(c);
	if (length >= MAX) {
		length = MAX - 1;
	}
	std::strncpy(color, c, length);
	color[length] = '\0';

}
LocksDMA::LocksDMA(const char* c, const BaseDMA& bd) :
		BaseDMA(bd) {
	int length = std::strlen(c);
	if (length >= MAX) {
		length = MAX - 1;
	}
	std::strncpy(color, c, length);
	color[length] = '\0';
}
std::ostream& operator<<(std::ostream& os, const LocksDMA& ld){
	os << (const BaseDMA&)ld;
	os << "Color: " << ld.color << std::endl;
	return os;
}
HasDMA::HasDMA(const char* s, const char* lab,
			int r): BaseDMA(lab, r){
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
HasDMA::HasDMA(const char* s, const BaseDMA& bd):
	BaseDMA(bd){
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
HasDMA::HasDMA(const HasDMA& hd): BaseDMA(hd){
	style = new char[std::strlen(hd.style) + 1];
	std::strcpy(style, hd.style);
}
HasDMA::~HasDMA(){
	delete [] style;
}
HasDMA& HasDMA::operator=(const HasDMA& hd){
	if(this == &hd){
		return *this;
	}else{
		delete [] style;
		BaseDMA::operator=(hd);
		style = new char[std::strlen(hd.style) + 1];
		std::strcpy(style, hd.style);
		return *this;
	}
}
std::ostream& operator<<(std::ostream& os, const HasDMA& hd){
	os << (const BaseDMA&)hd;
	os << "Style: " << hd.style << std::endl;
	return os;
}

