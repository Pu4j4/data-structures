#include<iostream>
using namespace std;
int main()
{
 int i,n,sum=0;
 
 cout<<"Enter The Number Of Terms \n";
 cin>>n;
 
 cout<<"\nSeries I sGiven Below\n\n";
 for(i=1;i<=n;i*=2)
 {
  sum+=i;
  cout<<i<<" ";
 }
 cout<<"\n\nSum Of Above Series Is\n";
 cout<<sum <<endl;;
  
return 0;
}