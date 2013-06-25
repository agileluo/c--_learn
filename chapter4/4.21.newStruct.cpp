#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	
	inflatable* p = new inflatable;
	cout << "Enter the name: " ;
	cin >> p->name;
	cout << "Enter the volume: " ;
	cin >> (*p).volume;
	cout << "Enter the price: " ;
	cin >> (*p).price;
	
	cout << "Your name:" << p->name << endl;
	cout << "volume:" << p->volume << endl;
	cout << "price:" << p->price << endl;
	
	delete p;
	
}