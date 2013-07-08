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
	p3 = new (buffer)JustTesting("bad idea", 6);
	p4 = new JustTesting("Heap2", 10);
	cout << "address and content: \n";
	cout << "buffer: " << p3 << ": " ; p3->show();
	cout << "heap: " << p4 << ": " ; p4->show();
	
		
	delete p2;
	delete p4;
	delete [] buffer;
	
	cout << "Done\n";
}

