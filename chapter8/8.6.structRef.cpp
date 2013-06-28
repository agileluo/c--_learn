#include <iostream>

using namespace std;
struct sysop{
	char name[20];
	char quote[64];
	int used;
};

sysop& use(sysop& sp);

int main()
{
	sysop sp = {
		"agileluo",
		"Tdd, atdd, continue delivery",
		0
	};
	
	use(sp);
	cout << "Looper: " << sp.used << " use(s)\n";
	sysop copysp;
	copysp = use(sp);
	cout << "Looper: " << sp.used << " use(s)\n";
	cout << "Looper: " << copysp.used << " use(s)\n";
	cout << "Looper: " << use(sp).used << " use(s)\n";
	
}

sysop& use(sysop& sp){
	cout << "Rick \"" << sp.name << "\" Looper says:\n";
	cout << sp.quote << endl;
	sp.used++;
	return sp;
}