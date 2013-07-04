
typedef unsigned long Item;

class Stack{
	private:
		static const int Max = 10;
		Item items[Max];
		int top;
	public:
		Stack();
		bool push(const Item item);
		bool pop(Item& item);
};