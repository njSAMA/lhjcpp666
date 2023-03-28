#include<iostream>
using namespace std;
void func()
{
	static int n;//定义一个静态变量n
	n++;
}
static int n=0;//为n赋值
int main()
{
	for (int i = 0; i < 10; i++)//循环调用函数func10次
	{
		func();
	}
	cout << n;//输出
	return 0;
}