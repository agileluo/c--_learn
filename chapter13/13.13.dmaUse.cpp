#include "13.13.dma.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	BaseDMA shirt("Portablelly", 8);
	LocksDMA ballon("red", "bllmpo", 4);
	HasDMA map("china", "agileluo", 20);

	cout << shirt << endl;
	cout << ballon << endl;
	cout << map << endl;

	LocksDMA ballon2(ballon);
	HasDMA map2;
	map2 = map;

	cout << ballon2 << endl;
	cout << map2 << endl;

	return 0;
}

