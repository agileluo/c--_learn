#include <iostream>
#include <cstring>
#include "10.4.stock.h"

Stock::Stock(){
	std::cout << "default construct called.\n";
	std::strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char* co, int n , double pr){
	std::cout << "construct use " << co << " called.\n";
	acquire(co, n, pr);
}
Stock::~Stock(){
	std::cout << "Bye " << company << ", & = " << &company << std::endl;
}

void Stock::acquire(const char* co, int n , double pr){
	std::strncpy(company, co, 29);
	company[29] = '\0';
	if(n < 0){
		std::cerr << "Number of share cann't be negative. " << company << " shares set to 0.\n";
		shares = 0;
	}else{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(int num, double price){
	if( num < 0){
		std::cerr << "Number of shares purchased cann't be negative. Transation is aborted.\n";
	}else{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(int num, double price){
	if( num < 0){
		std::cerr << "Number cann't be negative.\n";
	}else if(num > shares){
		std::cerr << "You can sell then you have.\n";
	}else{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price){
	share_val = price;
	set_tot();
}
void Stock::show(){
	using std::cout;
	using std::endl;
	cout << "Company: " << company
		<< " Shares: " << shares << endl
		<< " Share Price: $" << share_val
		<< " Total worth: $" << total_val << endl;
}
const Stock & Stock::topVal(const Stock& s)const{
	if(s.total_val > total_val){
		return s;
	}else{
		return *this;
	}
}