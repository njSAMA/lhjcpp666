#include<iostream>
using namespace std;

class cat//定义一个类“cat”
{
public:
	static int numofcats;///定义一个静态变量
	static int getnumofcats(int x)//定义一个函数返回‘x’
	{
		return x;
	}
};

int cat::numofcats;//调用cat作用域下numofcats

int main()
{
	cat::numofcats = 20;//赋值
	int num = cat::getnumofcats(cat::numofcats);//调用cat下的函数
	cout << num;//输出
	
	return 0;
}