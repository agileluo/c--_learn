#include <iostream>

const int arrSize = 6;

int sum_arr(int arr[], int len);

int main()
{
	using namespace std;
	int arr[arrSize] = {6, 11, 14, 17, 21, 24};
	cout << "The total key value : " << sum_arr(arr, arrSize);
}

int sum_arr(int arr[], int len){
	int result = 0;
	for(int i = 0; i < len; i++){
		result += arr[i];
	}
	return result; 
}