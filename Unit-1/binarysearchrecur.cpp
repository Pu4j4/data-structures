#include<iostream.h>
#include<conio.h>
int binarySearchrecursion(int[],int,int,int)
void main()
{
    int i,a[10],n,key;
    cout<<"enter no.of elements:";
    cin>>n;
    cout<<"enter elements to the array:";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter key element";
    cin>>key;
    index=binarySearchrecursion(a,i,n,key);
    if(index==0)
    cout<<key<<"not found"<<endl;
    else
    cout<<key<<"found at index:";<<index<<endl;
}
    int binarySearchrecursion(int a[],int l,int h, int key)
{
    int m;
    if(l<=h)
    {
        m=(l+h)/2;
        if(key==a[m])
        return 1;
        else if(key<a[m])
        binarySearchrecursion(a,l,m,-1,key);
        else
        binarySearchrecursion(a,m+1,h,key);
    }
        return 0;
}