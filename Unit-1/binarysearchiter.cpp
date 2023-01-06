#include<iostream.h>
#include<conio.h>
int binarysearch(int[],int,int)
void main()
{
    int i,a[],n,index,key;
    cout<<"enter no.of elements:";
    cin>>n;
    cout<<"enter array elements";
    for(i=0;i<n;i++)
    cin>>key;
    index=binarysearch(a,n,key);
    if(index==0)
    cout<<key<<"not found"<<endl;
    else
    cout<<key<<"found at index:"<<index<<endl;
}
    int binarysearch(int a[],int n,int key)
{
    int l,m,h;
    while(l<=h)
    {
        m=(l+h)/2;
        if(key==a[m])
        return 1;
        else if(key<a[m])
        h=m-1;
        else
        l=m+1;
    }
    return 0;
}