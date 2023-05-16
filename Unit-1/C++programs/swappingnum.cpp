#include<bits/stdc++.h>
using namespace std;

void swap(int&, int&);    

int main()
{
    int first, second;

 cout<<"Enter The Two Value \n";
    cin>>first>>second;
     
    cout << "\nBefore Swapping Values Are\n" << endl;
 
 cout<<"First Value is = "<<first<<endl;
 cout<<"Second Value is = "<<second<<endl;
 
    swap(first, second);
 
 return 0;
}

void swap(int &first, int &second)
{
    int temp;
    temp = first;
    first = second;
    second = temp;
    
    cout << "\n\nAfter Swapping Values Are\n" << endl;
 
 cout<<"First Value is = "<<first<<endl;
 cout<<"Second Value is = "<<second<<endl;
}
