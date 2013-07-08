#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;


class JustTesting{
	private:
		string words;
		int num;
	public:
		JustTesting(const string& str = "Just Testing", int n = 0){
			words = str; num = n; cout << words << " constructed.\n";
		}
		~JustTesting(){
			cout << words << " destoryed.\n";
		}
		void show(){
			cout << words << "; " << num << endl;
		}
};

int main()
{
	char* buffer = new char[BUF];
	
	JustTesting *p1, *p2;
	p1 = new (buffer)JustTesting;
	p2 = new JustTesting("heap1", 20);
	
	cout << "address and content: \n";
	cout << "buffer: " << p1 << ": " ; p1->show();
	cout << "heap: " << p2 << ": " ; p2->show();
	
	JustTesting *p3, *p4;
	cout << "sizeof(JustTesting): " << sizeof(JustTesting) << endl;
	cout << "sizeof(*p1) " << sizeof(*p1) << endl;
	p3 = new (buffer + sizeof(*p1))JustTesting("better idea", 6);
	p4 = new JustTesting("Heap2", 10);
	cout << "address and content: \n";
	cout << "buffer: " << p3 << ": " ; p3->show();
	cout << "heap: " << p4 << ": " ; p4->show();
	
		
	delete p2;
	delete p4;
	p1->~JustTesting();
	p3->~JustTesting();
	delete [] buffer;
	
	cout << "Done\n";
}

