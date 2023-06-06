#include <iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
main ()
{
int s1,s2,a[100],b[100],i;
cout<<"Enter the size of Array 1\n\n";
cin>>s1;
cout<<"Enter the first Element of array\n\n";
for(i=0;i<s1;i++)
{
 cin>>a[i];
}

cout<<"Enter the size of Array 2\n\n";
cin>>s2;
cout<<"Enter the Second Element of array\n\n";
for(i=s1;i<s2+s1;i++)
{
 cin>>a[i];
}

cout<<"Merge array Are Given Below\n\n";
for(i=0;i<s1+s2;i++)
{
 cout<<a[i]<<" ";
}

}