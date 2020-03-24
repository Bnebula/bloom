#include  <iostream>
#include  <cmath>
using  namespace  std;
int isPrime(int a)
{
    int i;
    for(i=2; i<a; i++)
        { 
         if(a%i==0)
         return(0);
        }
    return(1);
}
int  main()
{
        unsigned  short  a;
        cin>>a;
        if  (isPrime(a))
                cout<<"Y"<<endl;
        else
                cout<<"N"<<endl;
} 
