#include "item.h"
#include <string.h>
#include <iostream>
using namespace std;

T copy(int first, int last, T s)
{
	T p = new char[last - first + 1];
	T begin = p;
	while (first != last)
		*p++ = s[first++];
	*p = '\0';
	return begin;
}

T copy(T s)
{
	return copy(0, strlen(s), s);
}

void dispose(T s)
{
	delete[] s;
}

int equal(T s1, T s2)
{
	return strcmp(s1, s2) == 0;
}

int cmp(T s1, T s2)
{
	return strcmp(s1, s2);
}

int input(T item)
{
	cin.getline(item, 265, '\n');
	return !cin.eof();
}

void output(T item)
{
	cout << item << endl;
}