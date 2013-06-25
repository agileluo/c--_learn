#include <iostream>

const int Years = 4;
const int Cities = 5;

int main()
{
	using namespace std;
	
	const char* cities[Cities] = 
	{
		"Shenzhen",
		"Ganzhou",
		"ZhuHai",
		"Shanghai",
		"Beiging"
	};
	
	int sales[Years][Cities] = 
	{
		{95, 99, 86, 100, 104},
		{95, 97, 90, 106, 102},
		{96, 100, 940, 107, 105},
		{97, 102, 89, 108, 104}
	};
	
	cout << "Salis for 2012 - 2013 \n\n";
	for(int city = 0; city < Cities; city++)
	{
		cout << cities[city] << ": ";
		for(int year = 0; year < Years; year++)
		{
			cout << sales[year][city] << " ";
		}
		cout << endl;
	}
}