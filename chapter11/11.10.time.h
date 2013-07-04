#include <iostream>

class Time{
	private:
		int hour;
		int min;
	public:
		Time(int hour = 0, int min = 0);
		Time operator+ ( const Time& time) const;
		Time operator- ( const Time& time) const;
		Time operator* ( int m) const;
		friend Time operator*(int m, const Time& time)
		{
			return time * m;
		}
		friend std::ostream& operator<<( std::ostream& os, const Time& time);
};