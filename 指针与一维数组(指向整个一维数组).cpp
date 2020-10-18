//指向整个一维数组的指针变量
/*
int b[3][5]={12,45,46,14,48,46,48,87,56,47,16,38,92,75,73}
int (*p)[5]=b;
//*表示这是一个指针变量；
//说明这种指针变量指向的是整个一维数组
//p+i;p[i];*p+i 就表示b[i][0];
//*(p+i)+j;p[i]+j;&p[i][j] 就表示b[i][j];
*/

#include<iostream>
using namespace std;
int main()
{
	int b[3][5] = {12,45,46,14,48,46,48,87,56,47,16,38,92,75,73};
	int(*p)[5] = b;  //p是一个行指针变量；*p+i和p[i]是列指针；

	//输出每行的首地址  p+i;p[i];*p+i 就表示b[i][0];
	cout << "输出每行的首地址(p+i):" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << p + i << "---";
	}cout << endl << endl;

	cout << "输出每行的首地址p[i]:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << p[i] << "---";
	}cout << endl << endl;

	//输出数组每个元素的地址  *(p+i)+j;  ;&p[i][j] 就表示b[i][j];
	cout << "输出数组每个元素的地址 *(p+i)+j:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(p + i) + j << "---";
		}
		cout << endl;
	}
	cout << endl;
	cout << "输出数组每个元素的地址 p[i]+j:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << p[i] + j << "---";
		}
		cout << endl;
	}
	cout << endl;

	//输出数组每个元素的值；
	cout << "输出数组每个元素的值（普通方法）" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout <<p[i][j] << "---";
		}
		cout << endl;
	}
	cout << endl;
	cout << "输出数组每个元素的值（指针方法）" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout <<*(*(p+i)+j) << "---";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

/*
程序输出：

输出每行的首地址(p+i):
001AFCF4---001AFD08---001AFD1C---

输出每行的首地址p[i]:
001AFCF4---001AFD08---001AFD1C---

输出数组每个元素的地址 *(p+i)+j:
001AFCF4---001AFCF8---001AFCFC---001AFD00---001AFD04---
001AFD08---001AFD0C---001AFD10---001AFD14---001AFD18---
001AFD1C---001AFD20---001AFD24---001AFD28---001AFD2C---

输出数组每个元素的地址 p[i]+j:
001AFCF4---001AFCF8---001AFCFC---001AFD00---001AFD04---
001AFD08---001AFD0C---001AFD10---001AFD14---001AFD18---
001AFD1C---001AFD20---001AFD24---001AFD28---001AFD2C---

输出数组每个元素的值（普通方法）
12---45---46---14---48---
46---48---87---56---47---
16---38---92---75---73---

输出数组每个元素的值（指针方法）
12---45---46---14---48---
46---48---87---56---47---
16---38---92---75---73---
*/