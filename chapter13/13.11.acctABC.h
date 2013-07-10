#include <iostream>

class AcctABC
{
private:
	enum { MAX = 35};
	char name[MAX];
	long acctNum;
	double balance;
protected:
	const char * getName()const { return name;};
	long getAcctNum()const { return acctNum;};
	std::ios_base::fmtflags setFormat() const;
public:
	AcctABC(const char* s = "nobody", long an = -1,
		double bal = 0.0);
	void deposit(double amt);
	virtual void withDraw(double amt) = 0; //pure virtual function
	double getBalance()const { return balance;};
	virtual void viewAcct()const = 0;
	virtual ~AcctABC(){};
		
};

class Brass: public AcctABC
{
public:
	Brass(const char* s = "nobody", long an = -1,
		double bal = 0.0): AcctABC(s, an, bal){};
	virtual void withDraw(double amt);
	virtual void viewAcct()const;
	virtual ~Brass(){};
};

class BrassPlus: public AcctABC
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const char* s = "noboay", long an = -1,
		double bal = 0.0, double ml = 500,
		double r = 0.1);
	BrassPlus(const Brass& ba, double ml = 500, 
		double r = 0.1);
	virtual void withDraw(double amt);
	virtual void viewAcct()const;
	void setMax(double m) { maxLoan = m;};
	void setRate(double r) { rate = r; };
	void clearOwesBank() { owesBank = 0;};
};
