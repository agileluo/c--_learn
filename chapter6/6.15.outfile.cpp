#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	
	ofstream outfile;
	outfile.open("out.txt");
	
	char automobile[50];
	int year; 
	double price;
	
	cout << "Make and model: ";
	cin.getline(automobile, 50);
	cout << "Year: ";
	cin >> year;
	cout << "Price: ";
	cin >> price;
	
	outfile << fixed;
	outfile.precision(2);
	
	outfile << "Make and model: " << automobile << endl;
	outfile << "Year: " << year << endl;
	outfile << "Price: " << price << endl;
	
	outfile << fixed;
	outfile.close();
}
