#include<iostream.h>
#include<conio.h>
class student
{
    private:
    int sno,m1,m2,m3,total;
    char sname[20],grade;
    float avg;
    void get data();
    void put data();
    void process marks();
}
void main()
{
    students;
    cout<<"enter student details\n:";
    s.get data()
    s.process marks();
    cout<<"student details are:";
    s.put data();
}
void student:get data()
{
    cout<<"enter student no:";
    cin>>sno;
    cout<<"enter student name:";
    cin>>sname;
    cout<<"enter student marks:";
    cin>>m1>>m2>>m3;
}
void student::put data()
{
    cout<<"number"<<sno<<endl;
    cout<<"name"<<sname<<endl;
    cout<<"m1"<<m1<<endl;
    cout<<"m2"<<m2<<endl;
    cout<<"m3"<<m3<<endl;
    cout<<"total"<<total<<endl;
    cout<<"percentage"<<avg<<endl;
    cout<<"grade"<<grade<<endl;
}
void student::process marks()
{
    total=m1+m2+m3;
    avg=(float)total/3;
    if(avg>90)
    grade="O";
    else (avg>80)
    grade="A";
    if(avg>70)
    grade="B";
    else (avg>60)
    grade="c";
    if(avg>50)
    grade="D";
    else (avg>40)
    grade="E";
}