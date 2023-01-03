//infix into postfix expression in c++
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void into post(char[],char[]);
int isoperator(char);
int isopen(char);
int isparanthesis(char);
int precendence(char);
char top(char[]);
void push (char[],char[]);
char pop(char[]);
int tos=-1;
void main()
{
    char ie[20],pe[20];
    clrscr();
    cout<<"enter the infix expression:\n";
    gets(ie);
    into post(ie,pe);
    cout<<"postfix expression:\n";
    puts(pe);
}
void into post(char ie[],char pe[])
{
    int i,j,k,par,a,px,py,opx,opy;
    char s[2],x,y;
    i=j=0
    x=ie[i]j
    while(x!='\0')
    {
        k isoperator(x);
        par isparanthesis(x);
        if(k!=para=1)
        pe(++j)=x;
        else if (tos!=-1)
        {
            if (par==1)
            {
                opx=isopen(x);
                if (opx!=1)
                {
                    y=tos(s);
                    a=isopen(y);
                    while (a!=1)
                    {
                        pe(j++)=pop(s);
                        if (tos==-1)
                        break;
                        else
                        {
                            y=top(s);
                            a=isopen(y);
                        }
                    }
                    else
                    {
                        y=top(s);
                        opy=isopen(y);
                        if (opy!=0)
                    }
                    char top char s()
                }
                char ch;
                if(tos!=-1)
            }
            ch=s(tos);
            tos--;
        }
    }
}