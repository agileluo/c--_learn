#include <iostream>

long double probability(unsigned numbers, unsigned picks);

using namespace std;
int main()
{
	unsigned number;
	unsigned pick;
	while(true){
		cout << "Enter two numbers(q to quit): ";
		cin >> number >> pick;
		if(cin.fail())
			break;
		cout << "your have one change in " << probability(number,pick) << " of winning\n";
	}
}

long double probability(unsigned numbers, unsigned picks){
	long double result = 1;
	long double n;
	unsigned p;
	for( n = numbers, p = picks; p > 0; p--, n--){
		result *= n/p;
	}
	return result;
}