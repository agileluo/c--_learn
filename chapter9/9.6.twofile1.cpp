#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;
void remote_access();

int main()
{
	using namespace std;
	cout << "tom = " << tom << ", &tom = " << &tom << endl;
	cout << "dick = " << dick << ", &dick = "  << &dick << endl;
	cout << "harry = " << harry << ", &harry = "  << &harry << endl;
	remote_access();
}