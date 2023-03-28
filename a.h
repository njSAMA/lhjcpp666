#pragma once
class x;//向前声明,让y认识x
class y
{
public:
    void g(x* p);//y的成员函数作为友元函数，需要在类外定义
};
class x
{
private:
    int i = 0;//私有成员i
    friend void y::g(x* p);//将y的成员函数作为友元函数
    friend class z;//将z作为友元类
    friend void h(x* p);//将h作为友元函数
public:
    int geti()//访问x中的私有成员i
    {
        return i;
    }
};
class z
{
public:
    void f(x* p)//i加5
    {
        p->i += 5;
    }
};
void h(x* p)//i加10
{
    p->i += 10;
}
void y::g(x* p)//i加1
{
    p->i++;
}