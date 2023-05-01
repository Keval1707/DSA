#include<iostream>
using namespace std;
class keval
{
public:
    int r,f,a[5],size;
    void enque();
    void deque();
    void display();
    keval()
    {
        r=-1;
        f=-1;
        size=5;
    }

};

void keval::enque()
{
    if (r>=size-1)
    {
        cout<<"\n que is full";
    }
    else 
    {
        if(f==-1)
        {
            f=0;
        }
        cout<<"\nenter number ";
        r++;
        cin>>a[r];
    }
    
}

void keval::deque()
{
    if(f==-1)
    {
        cout<<"\nque is emapty !";
    }
    else 
    {
        cout<<"delete elemet is :"<<a[f];
        f++;
        if (f>r)
        {
            f=r=-1;
        }
        

    }
}
void keval::display()
{
    for(int i=f;i<=r;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    keval kp;
    int ch;
    while (true)
    {
        cout<<"\npress 1. for enque ";
        cout<<"\npress 2. for deque ";
        cout<<"\npress 3. for dispaly ";
        cout<<"\npress 4. for exit ";
        cout<<"\n enter yor choice :  ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                kp.enque();
                break;
            case 2:
                kp.deque();
                break; 
            case 3:
                kp.display();
                break;
            case 4:
                exit(0);

                
        }
    }
    
}
