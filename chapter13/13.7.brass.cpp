#include "13.7.brass.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Brass::Brass(const char* s, long an,
			double bal){
	std::strncpy(name, s, MAX-1);
	name[MAX-1] = '\0';
	acctNum = an;
	balance = bal;
}
void Brass::deposit(double amt){
	if( amt < 0) {
		cout << "Negative deposit not allowed: deposit is cancelled.\n";
	}else{
		balance += amt;
	}
}
void Brass::withDraw(double amt){
	if( amt < 0) {
		cout << "Negative withDraw not allowed: withDraw is cancelled.\n";
	}else if(amt <= balance){
		balance -= amt;
	}else{
		cout << "withDraw amount of$" << amt
			<< "exceed your balance: withDraw is cancelled.\n";
	}
}
double Brass::getBalance()const{
	return balance;
}
void Brass::viewAcct()const{
	cout << "       Client: " << name << endl;
	cout << "Amount number: " << acctNum  << endl;
	cout << "     Balance: $" << balance << endl;
}

BrassPlus::BrassPlus(const char* s, long an,
		double bal, double ml, double r):Brass(s,an,bal){
		maxLoan = ml;
		rate = r;
		owesBank = 0.0;
}
BrassPlus::BrassPlus(const Brass& ba, double ml, double r): Brass(ba){
	maxLoan = ml;
	rate = r;
	owesBank = 0.0;
}
void BrassPlus::viewAcct()const{
	Brass::viewAcct();
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout << "   load rate: $" << rate << endl;
}
void BrassPlus::withDraw(double amt){
	double balance = getBalance();
	if( amt <= balance){
		Brass::withDraw(amt);
	}else if(amt < balance + maxLoan - owesBank ){
		double advance = amt - balance;
		owesBank += advance*(1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Fiance charge: $" << advance * rate << endl;
		deposit(advance);
		Brass::withDraw(amt);
	}else{
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	}	
}