#include <iostream>
#include <new>

const int BUF = 512;
const int N = 5;

char buffer[BUF];

int main()
{
	using namespace std;
	
	cout << "calling new and placement new" << endl;
	double* p1 = new double[N];
	double* p2 = new (buffer)double[N];
	
	for(int i = 0; i < N; i++){
		p1[i] = p2[i] = 1000 + i * 20;
	}
	
	for(int i = 0; i < N; i++){
		cout << p1[i] << " at " << &p1[i] ;
		cout << ", ";
		cout << p2[i] << " at " << &p2[i] << endl;
	}
	
	cout << "calling new and placement new" << endl;
	double* p3 = new double[N];
	double* p4 = new (buffer)double[N];
	
	for(int i = 0; i < N; i++){
		p3[i] = p4[i] = 1000 + i * 20;
	}
	
	for(int i = 0; i < N; i++){
		cout << p3[i] << " at " << &p3[i] ;
		cout << ", ";
		cout << p4[i] << " at " << &p4[i] << endl;
	}
	
	delete [] p1;
	cout << "calling new and placement new" << endl;
	p1 = new double[N];
	p2 = new (buffer + N * sizeof(double))double[N];
	
	for(int i = 0; i < N; i++){
		p1[i] = p2[i] = 1000 + i * 20;
	}
	
	for(int i = 0; i < N; i++){
		cout << p1[i] << " at " << &p1[i] ;
		cout << ", ";
		cout << p2[i] << " at " << &p2[i] << endl;
	}
	
}