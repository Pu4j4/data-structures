#include<iostream>
using namespace std;
int main()
{
 //By-Ghanendra Yadav
 int n,x,sum=0;

 cout<<"Enter The Number To Be Reverse: \n";
 cin>>n;

 while(n>0)
 {
  x=n%10;
  sum=sum*10+x;
  n=n/10;
 }
 cout<<"\nThe Reverse Number is "<<sum;
}
