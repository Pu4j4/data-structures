void stack::push(int x)
{
    if(isstackfull())
    {
        cout<<"stack is full\n";
    return;
    }
    s[++top]=x;
}
int pop()
{
    if(isstackempty())
    {
        cout<<"stack is empty\n";
        return;
    }
    return s[top--];
}