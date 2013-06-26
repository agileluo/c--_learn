#include <iostream>

const int Max = 5;

int main()
{
	using namespace std;
	
	cout << "Please enter the weigths of your fish.\n";
	cout << "You may enter up to 5 fish <q to terminate>\n";
	
	double sum = 0;
	double temp;
	int i = 0;
	do
	{
		cout << "fish # " << i + 1 << ":";
		cin >> temp;
		if( cin.good() ){
			sum += temp;
			i++;
		}else{
			cin.clear();
			while(cin.get() != '\n')
			{
				continue;
			}
		}
	}while( i < Max && cin.good());
	
	cout << sum / i << " = average weight of " << i << " fish.\n";
	cout << "done\n";
}
