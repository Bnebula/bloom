#include<iostream>
using namespace std;
int BuyWater(int bottle,int cap,int water);  //������ˮ����
int main()
{
	int  water,cap,bottle;  //����ˮ����ƿ��������ƿ����ʶ��
	cin>>water;
	cap=bottle=water; 
	cout<<BuyWater(bottle,cap,water);
}
int BuyWater(int bottle,int cap,int water)  //��ˮ����
{
	if(bottle<2&&cap<3)  //���������жϣ������ټ����һ�ˮΪֹ
	{
	  return water;
    }
    else  //�һ�ˮ֮�����ݹ� 
    {
    	int x=bottle%2;  //�һ���ʣ���ƿ
		int y=(bottle-x)/2;  //��ƿ�ܶһ�ˮ��
		int a=cap%3;  //�һ���ʣ�����
		int b=(cap-a)/3;  //�����ܶһ�ˮ��
		bottle=x+y+b;  //һ�ֶһ���ʣ���ƿ
		cap=a+b+y;  //һ�ֶһ���ʣ�����
		water+=y+b;  //һ�ֶһ����ܹ��õ���ˮ
		return BuyWater(bottle,cap,water);  //����ݹ� 
	}
}
 
