#ifndef STOCK_H
#define STOCK_H
class Stock{
	private:
		char company[30];
		int shares;
		double share_val;
		double total_val;
		void set_tot(){
			total_val = shares * share_val;
		}
	public:
		Stock();
		Stock(const char* co, int n = 0, double pr = 0.0);
		~Stock();
		void acquire(const char* co, int n , double pr);
		void buy(int num, double price);
		void sell(int num, double price);
		void update(double price);
		void show();
		const Stock & topVal(const Stock& s)const;
};
#endif