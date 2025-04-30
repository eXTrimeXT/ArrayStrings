#include "Tabl.h"
static T m[MAX];
static T* cur = m;
T* begin() { return m; }
T* end() { return cur; }
int length() { return cur - m; }

T* insert(const T& item)
{
	if (length() < MAX) *cur++ = copy(item);
	return cur;
}

T* erase(T* pos)
{
	T* i;
	dispose(*pos);
	for (i = pos; i < cur; i++)
	{
		*i = *(i + 1);
		cur--;
		return pos;
	}
}

void clear()
{
	T* i;
	for (i = m; i < cur; i++)
		dispose(*i);
	cur = m;
}

int remove(const T& item)
{
	T* i, * j = m, int n = 0;
	for (i = m; i < cur; i++)
		if (!equal(*i, item)) *j++ = *i;
		else { dispose(*i); n++; }
	cur = j;
	return n;
}

int find(const T& item)
{
	T* i;
	for (i = m; i < cur; i++)
		if (equal(*i, item)) return i - m;
	return -1;
}

int replace(const T& Old, const T& New)
{
	T* i; int count = 0;
	for (i = m; i < cur; i++)
		if (equal(*i, Old))
		{
			dispose(*i);
			*i = copy(New);
			count++;
		}
	return count;
}

void sort() {}