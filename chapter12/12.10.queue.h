#ifndef QUENE_H_
#define QUENE_H_
class Customer{
	private:
		long arrive;
		int processTime;
	public:
		Customer(){};
		void set(long when);
		long when()const { return arrive;};
		int ptime()const { return processTime;};	
};

typedef Customer Item;

class Queue{
	private:
		const static int Q_SIZE = 10;
		struct Node {
			Item item;
		    struct Node* next;
		};
		Node* first;
		Node* last;
		int items;
		const int qSize;
		Queue(const Queue& q): qSize(0){};
		Queue& operator=(const Queue& q){ return *this; };
	public:
		Queue(int qs = Q_SIZE);
		~Queue();
		bool isEmpty()const;
		bool isFull()const;
		int count()const;
		bool enQueue(const Item& item);
		bool deQueue(Item& item);
};

#endif