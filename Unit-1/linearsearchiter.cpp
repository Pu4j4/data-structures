#include<iostream.h>
#include<conio.h>
int linearsearch(int a[],int,int);
void main
{
    int a[10],key,i,n;
    cout<<"enter array size:";
    cin>>n;
    cout<<"enter key:";
    cin>>key;
    cout<<"enter array elements";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"array elements are:";
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t";
    int index=linearsearch(a,key,n);
    if(index==-1)
    cout<<key<<"not found in the list"<<endl;
    else
    cout<<key<<"found at index"<<index<<endl;
}
int linearsearch(int a[],int n,int key)
{
    int i;
    for(i=0;i<=n;i++)
    if(key==a[i])
    return 1;
    else 
    return 0;
}