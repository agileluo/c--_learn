#include <iostream>

struct inflatable
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	using namespace std;
	inflatable guess = { "martin flower", 100.0f, 99.99 };
	inflatable agileluo = { "agileluo", 120.0f, 10.2};
	
	cout << "Expand your guess list with " << guess.name 
	     << " and " << agileluo.name << "!\n";
	
	cout << "Your can have both for $" << guess.price + agileluo.price << "!\n";
}