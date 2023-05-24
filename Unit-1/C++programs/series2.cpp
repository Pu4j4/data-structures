#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 double sum=0,a;
 int n,i;

 cout<<"1+1/2^2+1/3^3+…..+1/n^n";
 cout<<"\nEnter The Value Of n :\n";
 cin>>n;

 for(i=1;i<=n;++i)
 {
  a=1/pow(i,i);
  sum+=a;
 }
 cout<<"Sum = "<<sum<<endl<<endl;
 return 0;