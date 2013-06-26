#include <iostream>

void cheers(int);
double cube(double);

using namespace std;
int main()
{
	cheers(5);
	cout << "Give me a number: ";
	double value;
	cin >> value;
	cout << "A " << value << "-foot cub have a volume of " << cube(value) << " cubic feet.\n";
	cheers(cube(2));
}

void cheers(int n){
	for(int i = 0; i < n; i++){
		cout << "Cheers! ";
	}
	cout << endl;
}

double cube(double x){
	return x * x * x;
}