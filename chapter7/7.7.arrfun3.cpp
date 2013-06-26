#include <iostream>

const int Max = 5;

// function prototype
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);

using namespace std;
int main()
{
	double rate;
	
	double arr1[Max];
	fill_array(arr1, Max);
	show_array(arr1, Max);
	cout << "Enter the revalue rate num: ";
	cin >> rate;
	revalue(rate, arr1, Max);
	show_array(arr1, Max);
}

int fill_array(double arr[], int limit){
	int i ;
	for( i = 0; i < limit; i++){
		cout << "Enter value #" << i + 1 << ": ";
		cin >> arr[i];
		if(!cin){
			cin.clear();
			while(cin.get() != '\n'){
				continue;
			}
			cout << "Bad input\n";
			break;
		}
	}
}

void show_array(const double arr[], int n){
	for(int i = 0; i < n; i++){
		cout << "Property #" << i + 1 << ": " << arr[i] << endl;
	}
}

void revalue(double r, double arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] *= r;
	}
}

