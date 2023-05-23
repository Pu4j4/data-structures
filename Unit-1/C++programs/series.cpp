#include<iostream>
using namespace std;
int main()
{
 int i,a=-1,b,n;
 
 cout<<"Enter The Number of Terms\n";
 cin>>n;
 
 for(i=1;i<=n;i+=3)
 {
      a*=-1;
      b=i;
      b*=a;
      cout<<b<<" ";
 }
 return 0;
}
