
class Stonewt{
	private:
		double pounds;
	public:
		Stonewt(double pounds);
		operator int()const;
		operator double()const;
};