#include <iostream>
#include <cstdlib>
#include <ctime>
#include "12.10.queue.h"

const int MIN_PER_HOUR = 60;
bool newCustomer(double x); //is there a new customer?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	srand(time(0));
	
	cout << "Case study: Bank of Healther Automatic teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	long cycleLimit = MIN_PER_HOUR * hours;
	cout << "Enter the average number of customers per hour: ";
	int perHour;
	cin >> perHour;
	double min_per_customer = MIN_PER_HOUR / perHour;
	
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;
	
	for(int i = 0; i < cycleLimit; i++){
		if(newCustomer(min_per_customer)){
			if(line.isFull()){
				turnaways++;
			}else{
				customers++;
				temp.set(i);
				line.enQueue(temp);
			}
		}
			
		if(wait_time <= 0 && !line.isEmpty()){
			line.deQueue(temp);
			wait_time = temp.ptime();
			line_wait += i - temp.when();
			served++;
		}
		
		if(wait_time > 0){
			wait_time--;
		}
		sum_line += line.count();
	}
	if(customers > 0){
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: " << double(sum_line)/cycleLimit << endl;
		cout << " average wait time: " << double(line_wait)/served << endl;
	}else{
		cout << "No customers.\n";
	}
	
	cout << "Done\n";
	return 0;
}

bool newCustomer(double x){
	return std::rand() * x / RAND_MAX < 1;
}