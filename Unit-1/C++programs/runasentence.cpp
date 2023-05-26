
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 
 /*Visit - www.programmingwithbasics.com*/
   
    cout<<"=====================================";
    cout<<"\nVisit - www.programmingwithbasics.com";
    cout<<"\n=====================================";
    
   int i, prev, next, j, k;
  //prev=0;
   char st[100];

   cout<<"\n\nEnter The Sentence: ";
   gets(st);

   for(i=0;st[i]!='\0';i++) 
   prev=i;

   cout<<"\n\nSentence In Reverse Order Is As Follow \n\n";
   for(k=i-1;k>=0;k--)
   { 
    if(st[k]==' '||k==0)
    {
     if(k==0)
     {
     next=0;
 }
     else
     {
     next=k+1;
 }
   
     for(j=next;j<=prev;j++)
     {
     cout<<st[j];
     } 
 cout<<" ";
     prev=next-2;  
    }
   }

   return 0;
}
