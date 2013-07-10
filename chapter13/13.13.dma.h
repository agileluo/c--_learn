#include <iostream>

class BaseDMA
{
private:
	char* label;
	int rating;
public:
	BaseDMA(const char* s = "null", int r = 0);
	BaseDMA(const BaseDMA& bd);
	virtual ~BaseDMA();
	BaseDMA & operator=(const BaseDMA& ba);
	friend std::ostream & operator<<(std::ostream& os, const BaseDMA& bd);
};

class LocksDMA: public BaseDMA
{
private:
	enum { MAX = 40 };
	char color[MAX];
public:
	LocksDMA(const char* c = "blank", const char* s = "null",
			int r = 0);
	LocksDMA(const char* c, const BaseDMA& bd);
	friend std::ostream& operator<<(std::ostream& os, const LocksDMA& ld);
};

class HasDMA: public BaseDMA
{
private:
	char* style;
public:
	HasDMA(const char* sty = "none", const char* lab = "null",
			int r = 0);
	HasDMA(const char* s, const BaseDMA& bd);
	HasDMA(const HasDMA& hd);
	~HasDMA();
	HasDMA& operator=(const HasDMA& hd);
	friend std::ostream& operator<<(std::ostream& os, const HasDMA& hd);
};
