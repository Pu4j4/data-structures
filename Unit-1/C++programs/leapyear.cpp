#include<iostream>
using namespace std;
int main()
{
 int year;

 cout<<"Enter The Year You Want To Check : \n";
 cin>>year;
 
 if((year%4)==0 && (year%400)==0)
 {
   cout<<"\nYear Is Leap Year\n";
 }
 else if(year%100==0)
  cout<<"\nYear Is Not Leap Year\n";
 else
  cout<<"\nYear Is Leap Year\n";
 return 0;
}
