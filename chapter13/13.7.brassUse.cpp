#include "13.7.brass.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	Brass luo("luo", 1001, 22000.00);
	BrassPlus agileluo("agileluo", 1002, 22000.00);
	luo.viewAcct();
	cout << endl;
	agileluo.viewAcct();

	luo.withDraw(30000);
	agileluo.withDraw(30000);
	
	cout << "Depositing $1000 into the agileluo Account: \n";
	agileluo.deposit(1000.00);
	cout << "agileluo's new balance: " << agileluo.getBalance() << endl;

	
}