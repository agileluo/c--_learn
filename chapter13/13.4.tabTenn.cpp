#include "13.4.tabTenn.h"
#include <cstring>
#include <iostream>

TableTennisPlayer::TableTennisPlayer
	(const char* fn,const char* ln, bool ht){
	std::strncpy(firstName, fn, LIM-1);
	firstName[LIM-1] = '\0';
	std::strncpy(lastName, ln, LIM-1);
	lastName[LIM-1] = '\0';
	hasTable = ht;
}
void TableTennisPlayer::name()const{
	std::cout << firstName << " " << lastName << ", ";
}
RatedPlayer::RatedPlayer
	(unsigned int r, const char* fn, 
				const char* ln, bool ht)
				: TableTennisPlayer(fn,ln,ht){
	rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp)
	: TableTennisPlayer(tp),rating(r){
}