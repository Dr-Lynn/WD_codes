#include "sqlist.h"

//倒转数组，空间复杂度为1
void reverse_data(sqlist& L)
{
	int p1 = 0;
	int p2 = L.length - 1;
	int temp;
	while (p1 < p2)
	{
		temp = L.data[p1];
		L.data[p1] = L.data[p2];
		L.data[p2] = temp;
		p1++;
		p2--;
	}
}

//int main()
//{
//	sqlist L{{1,2,3,4,5,6},6};
//	reverse_data(L);
//	for (int i = 0; i < L.length; i++)
//	{
//		cout << L.data[i] << " " ;
//	}
//	return 0;
//}