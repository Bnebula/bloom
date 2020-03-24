#include  <iostream>
#include<iomanip>
#include  <cmath>
using  namespace  std;
const  double  PI=3.1415926;
class Can
{
    public:
       void init(double h,double r)
       {
          H=h;
          R=r;
       }
        double GetH()  {return H;}
        double GetR()  {return R;}
        double getvolumn()  {return GetR()*GetR()*PI*GetH();}
        double getarea()  {return GetR()*GetR()*PI*2+2*GetR()*PI*GetH();}
     private:
        double H,R;
};
int  main()
{
        double  d,h;
        cin>>d>>h;
        
Can can;

        can.init(h,d/2);
        cout<<fixed<<setprecision(6);
        cout<<"油桶的容积是"<<can.getvolumn()<<"  "<<endl;
        cout<<"铁皮的面积是"<<can.getarea()<<endl;
}
