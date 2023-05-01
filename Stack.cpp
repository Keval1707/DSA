#include<iostream>
using namespace std;
class keval
{
    public:
    int a[5],top,size;
    void push();
    void pop();
    void dispaly();
    keval()
    {
        top=-1;
        size=5;
    }
};
void keval::push()
{
    if (top>=size-1)
    {
        cout<<"\nstack is obvrflow";
    }
    else
    {
         top++;
        cout<<"\nentre elment :";
        cin>>a[top];
    }
}
void keval::pop()
{
    if(top<0)
    {
        cout<<"\nstack is undeflow ";
    }
    else
    {
        cout<<"\ndelete element is :"<<a[top];
        top--;
    }
}
void keval::dispaly()
{
    if(top<0)
    {
         cout<<"\nstack is undeflow :";
    }
    else
{
        for(int i=0;i<=top;i++)
        {
            cout<<a[i]<<endl;
        }

    }
}
int main()
{
    keval k;
    int ch;
    while (true)
    {
        cout<<"\n press 1. for push ";
        cout<<"\n press 2. for pop ";
        cout<<"\n press 3. for dispaly ";
        cout<<"\n press 4. for exit ";
        cout<<"\n enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            k.push();
            break;
        case 2:
            k.pop();
            break;
        case 3:
            k.dispaly();
            break;
        case 4:
            exit(0);
            break;
        
        default:
            break;
        }
        
    }
    

}