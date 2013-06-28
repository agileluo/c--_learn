#include <iostream>

struct job{
	char name[20];
	double salary;
	int floor;
};

template <class T>
void Swap(T& a, T& b);

template <> void Swap<job>(job& a, job& b);
void show(const job& j);

using namespace std;
int main()
{
	job job1 = { "Develop", 20000.0, 8};
	job job2 = { "Auto test", 18000.0, 11};
	
	cout << "Before swap" << endl;
	show(job1);
	show(job2);
	
	Swap(job1, job2);
	cout << "After swap" << endl;
	show(job1);
	show(job2);
}

template <> void Swap<job>(job& a, job& b){
	int tempf;
	double temps;
	
	temps = a.salary;
	a.salary = b.salary;
	b.salary = temps;
	
	tempf = a.floor;
	a.floor = b.floor;
	b.floor = tempf;
}

template <class T>
void Swap(T& a, T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}


void show(const job& j){
	cout << j.name << ": $" << j.salary << " on floor" << j.floor << endl;
}
