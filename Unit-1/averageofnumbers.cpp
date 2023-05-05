#include<iostream>
using namespace std;

int main()
{
    int i,n,x,sum=0;
    float avg;

    cout<<"Enter How many numbers you want:: ";
    cin>>n;

    for(i=1;i<=n;++i)
    {
        cout<<"\nEnter number "<<i<<" :: ";
        cin>>x;

        sum+=x;
    }

    avg=(float)sum/(float)n;

    cout<<"\n\nSum of "<<n<<" Numbers :: "<<sum;

    cout<<"\n\nAverage of "<<n<<" Numbers :: "<<avg;

    cout<<"\n";

    return 0;
}