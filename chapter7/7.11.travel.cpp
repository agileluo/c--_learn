#include <iostream>

struct travel_time{
	int hours;
	int minutes;
};

travel_time sum_travel_time(travel_time t1, travel_time t2);
void show_travel_time(travel_time t);

using namespace std;
int main()
{
	
	travel_time t1 = {5, 45};
	travel_time t2 = {4, 55};
	travel_time t3 = {4, 32};
	
	travel_time total2Days = sum_travel_time(t1, t2);
	cout << "Two days total: " ;
	show_travel_time(total2Days);
	
	travel_time total3Days = sum_travel_time(total2Days, t3);
	cout << "Threee days total: " ;
	show_travel_time(total3Days);
}

travel_time sum_travel_time(travel_time t1, travel_time t2){
	travel_time result;
	int hours = t1.hours + t2.hours;
	int minutes = t1.minutes + t2.minutes;
	result.hours = hours + minutes/60;
	result.minutes = minutes % 60;
	return result;
}

void show_travel_time(travel_time t){
	cout << t.hours << " hours, " 
		 << t.minutes << " minutest. " << endl;
}
