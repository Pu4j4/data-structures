#include<iostream.h>
#include<conio.h>
long int fact(int);
void main()
{
    int n;
    cout<<"enter n value:";
    cin>>n;
    cout<<"factorial of"<<n<<"is"<<factorial(n);
}
long int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}