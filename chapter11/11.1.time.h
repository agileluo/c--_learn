
class Time{
	private:
		int hour;
		int min;
	public:
		Time(int hour = 0, int min = 0);
		Time operator+ ( const Time& time) const;
		Time operator- ( const Time& time) const;
		void show() const;
};