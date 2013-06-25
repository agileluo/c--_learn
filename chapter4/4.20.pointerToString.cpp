#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	
	char animal[20] = "cat";
	char* ps = animal;
	
	cout << "Before using strcpy" << endl;
	cout << " animal at " << (int*)animal << endl;
	cout << " ps at " << (int*)ps << endl;
	
	cout << "after using strcpy" << endl;
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << " animal at " << (int*)animal << endl;
	cout << " ps at " << (int*)ps << endl;
	
	
}