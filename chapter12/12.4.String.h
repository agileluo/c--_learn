#include <iostream>
using std::ostream;
using std::istream;

class String{
	private:
		char* str;
		int len;
		static int num_strings;
		static const int LIMIT = 80;
	public:
		String(const char* s);
		String();
		String(const String& s);
		~String();
		int length()const{ return len;};
		String& operator=(const String& str);
		String& operator=(const char* str);
		char& operator[](int i);
		const char& operator[](int i)const;
		
		friend bool operator<(const String& str, const String& str2);
		friend bool operator>(const String& str, const String& str2);
		friend bool operator==(const String& str, const String& str2);
		friend ostream& operator<<(ostream& os, const String& str);
		friend istream& operator>>(istream& is, String& str);
		
		static int howMany();
};