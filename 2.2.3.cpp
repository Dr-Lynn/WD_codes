#include "sqlist.h"

//去重复，时间复杂度为n，空间复杂度为1
void del_repeat(sqlist &L, int x)
{
	int pos = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] != x) 
		{
			L.data[pos] = L.data[i];
			pos++;
		}
	}
	L.length = pos;
}

//int main()
//{
//	sqlist L{ {1,1,3,3,1,4 },6 };
//	int x = 3;
//	del_repeat(L, x);
//	for (int i = 0; i < L.length;i++)
//	{
//		cout << L.data[i] << " ";
//	}
//	return 0;
//}
