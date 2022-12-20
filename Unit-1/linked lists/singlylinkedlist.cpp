#include <iostream.h>
#include <conio.h>
#include <stdio.h>
{
    private:
    int data;
    snode* next;
    public:
    int islistemptysll(snode*);
    snode* create Header(snode*,int);
    void insertsll(snode* int);
    void deletesll(snode* int);
    void displaysll(snode*);
};
void main()
{
    int x,ch;
    snode* H;
    clrscr()
    H=H-->createHeadersll();
    do
    {
        cout<<"\t\t\t\t menu\n";
        cout<<"\t\t\t\t 1.insert\n";
        cout<<"\t\t\t\t 2.delete\n";
        cout<<"\t\t\t\t 3.display\n";
        cout<<"\t\t\t\t 4.exit\n";
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
        cout<<"enter the element to be inserted:";
       cin>>x;
       H-->insertsll(H,x);
       break;
       case 2:
       cout<<"enter the element to be deleted:";
       cin>>x;
       H-->deletesll(H,x);
       break;
       case 3:
       H-->displaysll(H);
       break;
       default:
       cout<<"you have entered wrong choice\n";
       break;
        }
    }
    while(ch!=4)
}
int snode islistempty(snode* H)
{
    if(H-->next==NULL)
    return 1;
    elements
    return 0;
}
snode* snode createHeadersll()
{
    snode* H;
    H=new snode;
    if(H==NULL)
    {
        cout<<"out of memory space\n";
        return H;
    }
    void snode insertsll(snode* H,int x)
    {
        snode* newnode ,*p;
        newnode=new 
    }
}