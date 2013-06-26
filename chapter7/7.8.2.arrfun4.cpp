#include <iostream>

int ar2_sum(int (*ar2)[4], int rows);

int main()
{
	using namespace std;
	int things[][4]  =  {
			{1, 2, 3, 4},
			{5, 6, 7, 8},
			{9, 8, 7, 6}
	};
	cout << "Sum: " << ar2_sum(things, 3);
}

int ar2_sum(int ar2[][4], int rows){
	int result = 0;
	for(int r = 0; r < rows; r++){
		for(int c = 0; c < 4; c++){
			result += ar2[r][c];
		}
	}
	return result;
}