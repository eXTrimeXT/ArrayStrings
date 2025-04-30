#include "item.h"
//int const MAX = 10;
#define MAX 100;
typedef char* T;
T* begin();
T* end();
int length();
T* insert(const T& item);
T* erase(T* pos);
void clear();
int remove(const T& item);
int find(const T& item);
int replace(const T& Old, const T& New);
void sort();