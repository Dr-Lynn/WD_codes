#include "sqlist.h"

//返回最小值，并用数组最后一个数代替该位置
int del_min(sqlist &L)
{
	int min = L.data[0];
	int pos = 0;
	if (L.length == 0) return false;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] < L.data[pos])
		{
			min = L.data[i];
			pos = i;
		}
	}
	L.data[pos] = L.data[L.length - 1];
	-- L.length;
	return min;
}
//int main()
//{
//	sqlist L { {3, 8, 2, 99, 6}, 5 };
//	cout << del_min(L);
//	return 0;
//}