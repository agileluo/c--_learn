class Brass{
	private:
		enum {MAX = 35};
		char name[MAX];
		long acctNum;
		double balance;
	public:
		Brass(const char* s = "Nullbody", long an = -1,
			double bal = 0.0);
		void deposit(double amt);
		virtual void withDraw(double amt);
		double getBalance()const;
		virtual void viewAcct()const;
		virtual ~Brass(){};
};

class BrassPlus: public Brass{
	private:
		double maxLoan;
		double rate;
		double owesBank;
	public:
		BrassPlus(const char* s = "nubody", long an = -1,
			double bal = 0.0, double ml = 10000.00, double r = 0.10);
		BrassPlus(const Brass& ba, double ml = 10000.00, double r = 0.10);
		virtual void viewAcct()const;
		virtual void withDraw(double amt);
		void setMax(double m) { maxLoan = m;};
		void setRate(double r) { rate = r; };
		void clearOwesBank() { owesBank = 0;};
};