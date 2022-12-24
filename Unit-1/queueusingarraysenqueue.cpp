//function enqueue
void enqueue(int x)
{
    if(isqueuefull())
    {
   cout<<"queue is full";
   return;
    }
    a[++rear]=x;
    if(front==-1)
    front++;
}
//function dequeue
void dequeue()
{
    int y;
    if(isqueueempty())
    {
        cout<<"queue is empty\n";
        return -1; 
     }
     y=a[front];
     front=rerear=-1;
     else
     front++;
     return y;
}