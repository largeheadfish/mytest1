// 最长回文子串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include"string.h"
using namespace std;
char * longestPalindrome(char * s) {
	int n = strlen(s);
	int i, j;
	for (i = n ; i > 0; i--) {
		int sum1 = 0;
		int sum2 = 0;
		for (j = 0; j <= (n - i); j++) {
			for (int k = 0; k < i; k++) {
				if (s[j + k] != s[j + i - 1 - k]) {
					sum2++;
				}
				if (s[j + k] == s[j + i - 1 - k]) {
					sum1++;
				}
			}
			if (sum1 == i && sum2 == 0) {
				break;
			}
			else {
				sum1 = 0;
				sum2 = 0;
			}
		}
		if (sum1 == i && sum2 == 0) {
			break;
		}
		else {
			sum1 = 0;
			sum2 = 0;
		}
	}
	char *str = (char *)malloc(sizeof(char)*i);
	for (int t = 0; t < i; t++) {
		str[t] = s[j + t];
	}
	str[i] = '\0';
	return str;
}
int main()
{
	char a[] = "aba";
	cout << longestPalindrome(a) << endl;
	system("pause");
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
