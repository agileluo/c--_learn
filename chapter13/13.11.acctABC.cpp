#include "13.11.acctABC.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::ios_base;

AcctABC::AcctABC(const char* s, long an,
		double bal){
	std::strncpy(name, s, MAX-1);
	name[MAX-1] = '\0';
	acctNum = an;
	balance = bal;
}
void AcctABC::deposit(double amt){
	balance += amt;
}
ios_base::fmtflags AcctABC::setFormat()const{
	ios_base::fmtflags initialState = 
		cout.setf(ios_base::showpoint);
	cout.precision(2);
	return initialState;
}
void AcctABC::withDraw(double amt){
	balance -= amt;
}
void Brass::withDraw(double amt){
	if(amt <= getBalance()){
		AcctABC::withDraw(amt);
	}else{
		cout << "Error" << endl;
	}
}
void Brass::viewAcct()const{
	ios_base::fmtflags initialState = setFormat();
	cout << "       Client: " << getName() << endl;
	cout << "Amount number: " << getAcctNum()  << endl;
	cout << "     Balance: $" << getBalance() << endl;
	cout.setf(initialState);
}
BrassPlus::BrassPlus(const char* s, long an,
		double bal, double ml,
		double r): AcctABC(s,an,bal){
			maxLoan = ml;
			rate = r;
			owesBank = 0.00;
}
BrassPlus::BrassPlus(const Brass& ba, double ml, 
	double r): AcctABC(ba){
		maxLoan = ml;
		rate = r;
		owesBank = 0.00;
}
void BrassPlus::withDraw(double amt){
	ios_base::fmtflags initialState = setFormat();
	
	
	cout.setf(initialState);
}
void BrassPlus::viewAcct()const{
	ios_base::fmtflags initialState = setFormat();
	cout << "       Client: " << getName() << endl;
	cout << "Amount number: " << getAcctNum()  << endl;
	cout << "     Balance: $" << getBalance() << endl;
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout << "   load rate: $" << rate << endl;
	cout.setf(initialState);
}
