#include <iostream>

template <class T>
void showArray(T arr[], int n);

template <class T>
void showArray(T* arr[], int n);

using namespace std;

int main()
{
	int arr[] = {6, 11, 17, 21, 24};
	cout << "List";
	showArray(arr, 5);
	
	int before[] = {75, 120, 140};
	int* pd[3];
	pd[0] = &before[0];
	pd[1] = &before[1];
	pd[2] = &before[2];
	
	showArray(pd, 3);
}

template <class T>
void showArray(T arr[], int n){
	cout << "Template A call" << endl;
	for(int i = 0; i < n; i++){
		cout << arr[i] << " " ;
	}
}

template <class T>
void showArray(T* arr[], int n){
	cout << "Template B call" << endl;
	for(int i = 0; i < n; i++){
		cout << *arr[i] << " " ;
	}
}