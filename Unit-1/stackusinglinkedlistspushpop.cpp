//push function
void stack::push(int x)
{
    node *temp;
    temp=newnode()
    temp-->data=x;
    if (front==NULL)
    {
        temp-->next=NULL;
    }
    else
    {
        temp-->next=front;
    }
    front=temp;
}
//pop function
void stack::pop()
{
    if(front==NULL)
    cout<<"stack is empty\n";
    else
    {
    node *temp=front;
    front=front-->next;
    delete(temp);
    }
}
