#include<iostream>
#include<iomanip>
#include<cmath> 
using namespace std;
const double PI=3.1415926; 
class cylinder
{
	public:	
		cylinder(double H,double R);
		~cylinder();
		double getvolumn()
		 {return (r*r*PI*h);}
		double getarea()
		 {return (PI*r*r*2+PI*r*2*h);}
	private:
	    double r;
		double h;		
};
cylinder::cylinder(double H,double R)
{
	r=R;
	h=H;
	cout<<"构造函数被调用"<<endl;
}
cylinder::~cylinder()
{
	cout<<"析构函数被调用"<<endl;
}
int main() 
{
	double d,h;
	cin>>d>>h;
	cylinder can(h,d/2);
	cout<<fixed<<setprecision(6);
	cout<<"油桶的容积是"<<can.getvolumn()<<" "<<endl;
	cout<<"铁皮的面积是"<<can.getarea()<<endl;
}
