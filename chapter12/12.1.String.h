#include <iostream>

class String{
	private:
		char* str;
		int len;
		static int num_strings;
	public:
		String(const char* s);
		String();
		~String();
		friend std::ostream & operator<< (std::ostream& os, const String& str);
};