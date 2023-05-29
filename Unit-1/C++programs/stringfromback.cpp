#include<iostream>
using namespace std;
{
int main()  
    char str[80];
  int l, i;
    
 cout<<"\n\nEnter a String: ";
    cin.getline(str, 80);
    for(l = 0; str[l] != '\0'; l++);
    
    cout<<"\n\nString From Backward is below\n\n";
    
    for(i = l - 1; i >= 0; i--)
    {
        cout << str[i];
    }   
    return 0;
}