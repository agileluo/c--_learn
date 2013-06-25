#include <iostream>

int main()
{
	using namespace std;
	
	int update = 6;
	int* p_update;
	
	p_update = &update;
	
	cout << "Values: update = " << update << ", *p_update = " << *p_update << endl;
	cout << "Address: &update" << &update << ", p_update = " << p_update << endl;
	*p_update += 1;
	cout << "Now update = " << update << endl;
	
	
}