struct rect{
	double x;
	double y;
};
struct polar{
	double distance;
	double angle;
};

polar rect2polar(rect r);
void show_polar(polar pl);