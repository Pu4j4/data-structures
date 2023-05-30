#include<iostream>
using namespace std;
int main()
{
  int a;
  int *p1;
  
  p1=&a;
  
  cout<<"Enter The Number You Want to Check \n\n";
  cin>>a;
  
 if(*p1>0)
  {
  cout<<"Number Is Possitive \n";
 }
  else if(*p1<0)
  {
  cout<<"Number Is Negative \n";
 }
  else
  {
  cout<<"Number Is Equal to Zero\n\n";
 }
  return 0;

}
