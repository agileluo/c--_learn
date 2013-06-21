#include <iostream>
int main()
{
	using namespace std;
	
	int apples = 0;
	
	cout << "How many apples do you have?" << endl;
	cin >> apples;
	cout << "Here are two more. ";
	apples += 2;
	cout << "Now your got " << apples << " apples" << endl;
}