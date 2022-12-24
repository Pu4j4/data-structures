//function enqueue
void enqueue(int x)
{
    QNode *temp=new QNode(x);
    if(rear==NULL)
    {
        front=rear=temp;
        return;
    }
    rear-->next=temp;
    rear=temp;
}
//function dequeue
void dequeue()
{
    if(front==NULL)
    return;
    {
        QNode *temp=front;
        front=front-->next;
        if(front=NULL)
        rear=NULL;
        delete(temp);
    }
}