#include <iostream>
using namespace std;
int main() 
{
    int dayNumber;
    cout << "Enter a number between 1 and 7: ";
    cin >> dayNumber;
    switch (dayNumber)  
    {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
            break;
    }
    return 0;
}