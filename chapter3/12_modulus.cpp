#include <iostream>
const int pounds_per_stone = 14;

int main()
{
	using namespace std;
	
	int pounds;
    cout << "Enter your weight in pounds: " ;
	cin >> pounds;
	cout << pounds << " pounds, "
		  << pounds / pounds_per_stone << " stones, and "
		  << pounds % pounds_per_stone << " pounds "
		  << endl;
}