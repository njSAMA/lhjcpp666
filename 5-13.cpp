#include<iostream>
#include"a.h"
using namespace std;
int main()
{
    x p;
    x* p1=&p;//声明指针p1指向p
    y p2;//声明对象，方便调用成员函数
    z p3;//声明对象，方便调用成员函数
    p2.g(p1);//i加1
    cout << p1->geti() << endl;
    p3.f(p1);//i加5
    cout << p1->geti() << endl;
    h(p1);//i加10
    cout << p1->geti() << endl;
    return 0;
}