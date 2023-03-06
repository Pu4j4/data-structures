#include<iostream>

#include<string.h>

using namespace std;



int main()

{

    int rollno, phy, che, it, total;

    float percentage;

    char name[20], div[10];



    cout << "Input the Roll Number of the student :";

    cin >> rollno;



    cout << "Input the Name of the Student :";

    cin >> name;



    cout << "Input the marks of Physics, Chemistry and Information Technology: ";

    cin >> phy >> che >> it;



    total = phy + che + it;

    percentage = total/3.0;



    if (percentage >= 60)

    strcpy(div, "First");



    else

    if (percentage < 60 && percentage >= 48)

        strcpy(div,"Second");



    else

        if (percentage <48 && percentage >= 36)

        strcpy(div, "Pass");



         else

        strcpy(div, "Fail");



       cout << "Roll No : " << rollno <<endl << "Name of Student : " << name <<endl;



       cout << "Marks in Physics : " << phy << endl;

       cout << "Marks in Chemistry : " << che << endl;

       cout << "Marks in Information Technology : " << it << endl;

       cout << "Total Marks = " << total <<endl;

       cout << "Percentage = " << percentage <<endl;

       cout << "Division = " << div <<endl;
}