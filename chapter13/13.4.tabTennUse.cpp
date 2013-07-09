#include "13.4.tabTenn.h"
#include <iostream>

int main(){
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("luo", "mingliang", true);
	RatedPlayer rPlayer1(2013, "uc", "cl", false);
	rPlayer1.name();
	if(rPlayer1.isHasTable()){
		cout << "has a table.\n";
	}else{
		cout << "hasn't a table.\n";
	}
	player1.name();
	if(player1.isHasTable()){
		cout << "has a table.\n";
	}else{
		cout << "hasn't a table.\n";
	}
	cout << "Name: ";
	rPlayer1.name();
	cout << ": rating: " << rPlayer1.getRating() << endl;
	RatedPlayer rPlayer2(2014, player1);
	cout << "Name: ";
	rPlayer2.name();
	cout << ": rating: " << rPlayer2.getRating() << endl;
	
	return 0;
}