#include<iostream>
using namespace std;
int BuyWater(int bottle,int cap,int water);  //声明买水函数
int main()
{
	int  water,cap,bottle;  //定义水数，瓶盖数，空瓶数标识符
	cin>>water;
	cap=bottle=water; 
	cout<<BuyWater(bottle,cap,water);
}
int BuyWater(int bottle,int cap,int water)  //买水函数
{
	if(bottle<2&&cap<3)  //函数结束判断：不能再继续兑换水为止
	{
	  return water;
    }
    else  //兑换水之后进入递归 
    {
    	int x=bottle%2;  //兑换后剩余空瓶
		int y=(bottle-x)/2;  //空瓶能兑换水数
		int a=cap%3;  //兑换后剩余盖子
		int b=(cap-a)/3;  //盖子能兑换水数
		bottle=x+y+b;  //一轮兑换后剩余空瓶
		cap=a+b+y;  //一轮兑换后剩余盖子
		water+=y+b;  //一轮兑换后总共得到的水
		return BuyWater(bottle,cap,water);  //进入递归 
	}
}
 
