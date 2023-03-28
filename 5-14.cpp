#include<iostream>
using namespace std;
class boat//定义一个类“boat”
{
	friend void gettotalweight();//让gettotalweight能够访问boat里的私有元素
public:
	boat();
private:
	int m_weight;//在car中定义一个私有元素m_weight
};

boat::boat()
{
	this->m_weight = 10;//为boat中的m_weight赋值
}

class car//定义一个类“car”
{
	friend void gettotalweight();//让gettotalweight能够访问car里的私有元素
public:
	car();
private:
	int m_weight;//在car中定义一个私有元素m_weight
};

car::car()
{
	this->m_weight = 20;//为car中的m_weight赋值
}

void gettotalweight()//定义函数“gettotalweight”
{
	boat a;
	car b;
	cout << a.m_weight + b.m_weight;//将boat中的m_weight与car中的m_weight相加并输出
}

int main()
{
	gettotalweight();
	return 0;
}
