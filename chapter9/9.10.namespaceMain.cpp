#include <iostream>
#include "9.10.namespace.h"

void other();


int main()
{
	using debts::Debt;
	using debts::showDebt;
	Debt glof = {{"agileluo","Glof"}, 120.05};
	showDebt(glof);
	other();
}

void other(){
	using std::cout;
	using std::endl;
	using namespace debts;
	
	Person dg = {"what", "java"};
	showPerson(dg);
	cout << endl;
	
	const int N = 3;
	Debt zipper[N];
	for(int i = 0; i < N; i++){
		getDebt(zipper[i]);
	}
	for(int i = 0; i < N; i++){
		showDebt(zipper[i]);
	}
	cout << "Total debt: $" << sumDebt(zipper, N) << endl;
	return;
}