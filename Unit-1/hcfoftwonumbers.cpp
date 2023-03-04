#include <iostream>

using namespace std;

 

int Findgcd(int x, int y); 

 

int main()

{

    int num1, num2, hcf;

    cout<<"Enter any 2 numbers to find HCF or GCD: "<<endl;

    cin>>num1;

    cin>>num2;

 

    hcf = Findgcd(num1, num2);
 

    cout<<"GCD of "<<num1 <<" and "<<num2 <<" = "<<hcf;

    return 0;

}

 

int Findgcd(int x, int y)

{

    if(y == 0)

        return x;

    else

        return Findgcd(y, x%y);

}