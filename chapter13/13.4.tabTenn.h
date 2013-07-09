class TableTennisPlayer{
	private:
		enum {LIM = 20};
		char firstName[LIM];
		char lastName[LIM];
		bool hasTable;
	public:
		TableTennisPlayer(const char* fn = "none", 
				const char* ln = "none", bool ht = false);
		void name()const;
		bool isHasTable()const { return hasTable; };
		void setHasTable(bool v) { hasTable = v; };
};

class RatedPlayer: public TableTennisPlayer{
	private:
		unsigned int rating;
	public:
		RatedPlayer(unsigned int r = 0, const char* fn = "none", 
				const char* ln = "none", bool ht = false);
		RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
		unsigned int getRating()const { return rating;};
		void setRating(unsigned int r) { rating = r;};
};