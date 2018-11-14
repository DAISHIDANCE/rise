// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Arr
{
public:
	int length = 10;
	int a[10] = { 1,54,88,67,44,43,42,22,6,7 };
};
int main()
{
	Arr arr;
	int i = 0, j = 10 - i - 1;
	while (i < j)
	{
		if (arr.a[i] % 2 == 1 && arr.a[j] % 2 == 0)
		{
			int temp = arr.a[i];
			arr.a[i] = arr.a[j];
			arr.a[j] = temp;
			i++;
			j--;
		}
		else if (arr.a[i] % 2 == 0)
			i++;
		else if (arr.a[j] % 2 == 1)
			j--;
	}
	for (i = 0; i < 10; i++)
		cout << arr.a[i] << ' ';
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
