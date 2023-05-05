#include <iostream.h>
using namespace std;
bool checkleapyear(int year) 
{ 
    if (year % 400 == 0) 
        return true; 

    if (year % 100 == 0) 
        return false; 

    if (year % 4 == 0) 
        return true; 
    return false; 
} 

int main() {
 int yr = 2020;
 if(checkleapyear(yr))cout<<"Leap Year";
 else cout<<"Not Leap Year";
return 0;
}