#include <iostream>
usig namespace std;
class Node
{
    public:
    int data;
    Node *Next;
    Node (int data)
    {
        this-->data=data;
        Next=NULL;
    }
};
void print(Node *Head)
{
    while(Head!=NUll)
    {
        cout<<Head-->data<<" ";
        Head=Head-->next;
    }
}
int main()
{
    Node n1(10);
    Node *Head=&n1;
    Node n2(8);
    Node n3(6);
    Node n4(4);
    Node n5(2);
    n1.Next=&n2;
    n2.Next=&n3;
    n3.Next=&n4;
    n4.Next=&n5;
    n5.Next=NULL;
    print (Head);
    return 0;
}