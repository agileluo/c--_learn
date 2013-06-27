#include <iostream>

using namespace std;

double agileluo(int line);
double cmmi(int line);

void estimate(int line, double (*pf)(int line));

int main()
{
	int line;
	cout << "How many code do you need? " ;
	cin >> line;
	cout << "Here is agileuo estamite:" << endl;
	estimate(line, agileluo);
	cout << "Here is cmmi estamite:" << endl;
	estimate(line, cmmi);
	
}

void estimate(int line, double (*pf)(int line)){
	cout << line << " will take "
		 << pf(line) << " hours" << endl;
}

double agileluo(int line){
	if(line < 20){
		return 0.5;
	}else if(line >= 20){
		return 100 / 20 * 0.5;
	}
}
double cmmi(int line){
	return line * 5 / 60;
}