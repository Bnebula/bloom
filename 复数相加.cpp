#include<iostream>
#include<iomanip>
using namespace std; 
void xj(float a,float b,float c,float d);  //声明复数相加函数 
int main()
{
	float a,b,c,d;  //定义复数虚实部 
	cin>>a>>b>>c>>d;  //赋值
	cout<<endl;
	xj(a,b,c,d);
}
void xj(float a,float b,float c,float d)
{
	float e=a-c;
	float f=b-d;
	cout<<fixed<<setprecision(2)<<e<<" "<<f<<endl;
}
