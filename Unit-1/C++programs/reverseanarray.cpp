#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,sum=0;

  cout<<"Enter The Size of Array\n";
  cin>>n;
  
 cout<<"Enter Element Of Array\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }

  cout<<"Elment in Array is Given Below\n";
  for(i=(n-1);i>=0;i--)
  {
   cout<<a[i]<<"  ";
   sum=sum+a[i];
  }
  cout<<"\n\nSum Of Array Is = "<<sum;
 return 0;

}