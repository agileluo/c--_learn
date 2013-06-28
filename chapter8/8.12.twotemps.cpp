#include <iostream>

using namespace std;

const int arrSize = 5;

template <class T>
void Swap(T& a, T& b);

template <class T>
void Swap(T* a, T* b, int n);

void show(int arr[]);

int main()
{
	
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Swaped:\n";
	Swap(i,j);
	cout << "i, j = " << i << ", " << j << endl;
	
	int d1[arrSize] = {1, 12, 31, 4, 5};
	int d2[arrSize] = {5, 4, 18, 9, 2};
	cout << "Origin array: \n";
	show(d1);
	show(d2);
	Swap(d1, d2, arrSize);
	cout << "Swaped array: \n";
	show(d1);
	show(d2);
	
}

template<typename T>
void Swap(T& a, T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <class T>
void Swap(T* a, T* b, int n){
	T temp;
	for(int i = 0; i < n; i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(int nums[]){
	for(int i = 0; i < arrSize; i++){
		cout << nums[i] << " ";
	}
	cout << endl;
}