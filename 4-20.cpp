#include<iostream>
using namespace std;
class Complex                           //定义一个类“Complex”
{
    public:                             //访问接口
    double a,b;
    Complex(double c, double d = 0){    //定义一个函数并为类成员赋初值
        a=c;                            //实部
        b=d;                            //虚部
    }                                   //传入参数
    void add(Complex x){
        a+=x.a;                         //实数部分相加
        b+=x.b;                         //虚数部分相加
    }                                   //定义一个函数“add”，将两数相加后保存到c1中
    void show(){
        cout<<a<<"+"<<b<<"i"<<endl;     //输出复数
    }                                   //用于输出的函数
};
int main(){
    Complex c1(3, 5);                   //用复数3+5i初始化c1
    Complex c2=4.5;                     //用实数4.5初始化c2
    c1.add(c2);                         //将c1与c2相加，结果保存在c1中
    c1.show();                          //将c1输出（这时的结果应该是7.5+5i）
}