#include<iostream>
using namespace std;
int main()
{
 int A[3][3],B[3][3],C[3][3];
 int a,b,c;
 for(a=0;a<=2;a++)
 {
 	for(b=0;b<=2;b++)
 	cin>>A[a][b];
 }
 for(a=0;a<=2;a++)
 {
 	for(b=0;b<=2;b++)
 	cin>>B[a][b];
 }
 for(a=0;a<=2;a++)
 {
 	for(b=0;b<=2;b++)
 	{
 		C[a][b]=0;
 		for(c=0;c<=2;c++)
 		C[a][b]+=(A[a][c]*B[c][b]);
	 }
 	
 }
 for(a=0;a<=2;a++)
 {
 	for(b=0;b<=2;b++)
	 {
 	cout<<C[a][b];
 	cout<<" ";
 	 } 
 	cout<<"\n";
 }
 
 
} 
