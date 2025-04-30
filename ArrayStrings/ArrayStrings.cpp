#include <iostream>
#include "Tabl.h"
using namespace std;

int main()
{
	char buf[256];
	int nlines = 0;
	if ((nlines = _input(buf)) > 0)
	{
		sort();
		_output();
	}
}