#include <iostream>
using namespace std;
double cube(double num);
 
 
int main()
{
    int num;
    double c;
    cout<<"Enter any number: "<<endl;
    cin>>num;
 
    c = cube(num);
 
    cout<<"Cube of " <num << " is "<<c;
 
    return 0;
}
double cube(double num)
{
    return (num * num * num);
}