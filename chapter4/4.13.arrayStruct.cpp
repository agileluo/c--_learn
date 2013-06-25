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
	inflatable guests[2] = 
	{
		{ "martin flower", 100.0f, 99.99 },
		{ "agileluo", 120.0f, 10.2}
	};
	cout << "The guests" << guests[0].name << " and " << guests[1].name << endl;
	cout << "have a combined volume of " << guests[0].volume + guests[1].volume << " cubic feet.\n" ;
	
}