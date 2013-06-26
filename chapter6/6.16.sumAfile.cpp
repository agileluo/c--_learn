#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	
	ifstream infile;
	
	char fileName[50];
	cout << "Enter the data file name:" ;
	cin.getline(fileName, 50);
	
	infile.open(fileName);
	if(!infile.is_open()){
		cout << "File " << fileName << " opened fail!" << endl;
	}
	
	double value;
	double sum = 0;
	int num = 0;
	
	infile >> value;
	while(infile.good()){
		sum += value;
		num++;
		infile >> value;
	}
	
	if(infile.eof()){
		cout << "End fo file reached:\n";
	}else if(infile.fail()){
		cout << "Input terminated by data mismatch\n";
	}else{
		cout << "read error!\n";
	}
	
	if( sum == 0 ){
		cout << "no data process...\n";
	}else{
		cout << "Item read: " << num << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / num << endl;
	}
	
	
	infile.close();
}