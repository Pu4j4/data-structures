#include<iostream.h>
#include<conio.h>
int linearsearchrecursion(int a[],int,int,int)
void main()
{
    int a[],key,i,n;
    cout<<"enter array size"
    cin>>n;
    cout<<"enter array elements";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter key";
    cin>>key;
    int index=linearsearchrecursion(a,n,key,i);
    if(index==-1)
    cout<<key<<"not found"<<endl;
    else
    cout<<key<<"found at index"<<index<<endl;
    }
    int linearsearchrecursion(int a[],int n,int key,int i)
    {
        if(i>n)
        return 1;
        else if(key==a[])
        return 0;
        else
        return linearsearchrecursion(a,n,key,i+1);
    }