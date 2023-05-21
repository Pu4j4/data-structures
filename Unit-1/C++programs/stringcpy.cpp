#include<iostream>
using namespace std;

int main()
{
    
    char s1[100], s2[100], i;
  
    cout<<"\n\nEnter The String S1: ";
    cin>>s1;
  
    for(i=0; s1[i]!='\0'; ++i)
    {
      s2[i]=s1[i];
    }
   
  s2[i]='\0';
   
    cout<<"\n\nCopied String S2 is : "<<s2;
 
 return 0;