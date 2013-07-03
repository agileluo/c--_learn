#include <iostream>
#include "9.10.namespace.h"

namespace pers{
	using std::cout;
	using std::cin;
	
	void getPerson(Person& per){
		cout << "Enter first name: " ;
		cin >> per.fname;
		cout << "Enter last name: ";
		cin >> per.lname;
	}
	void showPerson(const Person& per){
		cout << per.fname << ", " << per.lname;
	}
}

namespace debts{
	void getDebt(Debt& debt){
		getPerson(debt.name);
		std::cout << "Enter debt: " ;
		std::cin >> debt.amount;
	}
	void showDebt(const Debt& debt){
		showPerson(debt.name);
		std::cout << ": $" << debt.amount << std::endl;
	}
	double sumDebt(const Debt arr[], int n){
		double result = 0;
		for(int i = 0; i < n; i++){
			result += arr[i].amount;
		}
		return result;
	}
}