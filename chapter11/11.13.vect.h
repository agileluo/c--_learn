#include <iostream>

namespace VECTOR{
	class Vector{
	private:
		double x;
		double y;
		double mag;
		double ang;
		char mode;
		void set_x();
		void set_y();
		void set_mag();
		void set_ang();
	public:
		Vector();
		Vector(double x, double y,char mode = 'r');
		double xVal() {return x;};
		double yVal() {return y;};
		double magVal() {return mag;};
		double angVal() {return ang;};
		void set(double x = 0.0, double y = 0.0,char mode = 'r');
		Vector operator+(const Vector& vector)const;
		friend std::ostream& operator<<(std::ostream& os, const Vector& vector);
};
}
