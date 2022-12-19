#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *Next;
    //constructor
    Node (int data)
    {
    this-->data=data;
    Next=NULL;
}
};
int main()
{
    Node n1(34);
    Node n2(61);
    Node n3(41);
    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<" "<<end1;
    return 0;
}