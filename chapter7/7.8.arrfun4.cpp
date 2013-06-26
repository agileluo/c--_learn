#include <iostream>

const int arrSize = 6;

int sum_arr(const int* begin, const int* end);

int main()
{
	using namespace std;
	int arr[arrSize] = {6, 11, 14, 17, 21, 24};
	cout << "The total key value : " << sum_arr(arr, arr + arrSize) << endl;
	cout << "First three enter are: " << sum_arr(arr, arr + 3) << endl;
	cout << "last two enter are: " << sum_arr( arr + (arrSize - 2), arr + arrSize) << endl;
}

int sum_arr(const int* begin, const int* end){
	int result = 0;
	for(const int* pt = begin; pt != end; pt++){
		result += *pt;
	}
	return result; 
}