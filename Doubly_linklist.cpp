#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}*head=NULL;
class keval
{
    public:
        void createl();
        void display();
        void addf();
        void addl();
        void deletel();
        void deleteF();
        void addp();
       void deletep();

};
void keval::deletep()
{
     if(head==NULL)
    {
        cout<<" \nlink list is empy !";
    }
    else
    {
        int pos;
        cout<<"enter location : ";
        cin>>pos;
        if(pos<=count)
        { 
            if(pos==1)
            {
                deleteF();
            }
            else
            {
                struct Node *p=new Node();
                struct Node *pnext=new Node();
                struct Node *pprev=new Node();
                p=head;
                for(int i=1;i<pos;i++)
                {
                    p=p->next;
                }
                cout<<"\n delete element is : "<<p->data;
                pnext=p->next;
                pprev=p->prev;
                pprev->next=pnext;
                pnext->prev=pprev;
                delete p;

            }
        }
        else
            cout<<"\nmax pos is :"<<count;
    }

}
void keval::addp()
{
    int num,pos;
    struct Node *temp=NULL;
    temp=new Node();
    struct Node *p=NULL;
    struct Node *k=NULL;
    p=head;
    k=new Node();
    cout<<" \n enter NUmber :";
    cin>>num;
    temp->data=num;
    temp->next=NULL;
    temp->prev=NULL;
    cout<<"enter location :";
    cin>>pos;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
       for (int i=0;i<=pos;i++)
       {
            if(pos==i)
            {
                p=p->next;
            }
        }
       temp->prev=k->prev;
       temp->next=k;
    }
    

}
void keval::deleteF()
{
     if(head==NULL)
    {
        cout<<"\nlist is empaty";
    }
    else
    {
        static Node *temp=NULL;
        temp=new Node();
        temp=head;
        head=temp->next;
        head->prev=NULL;
        cout<<"delete Node is ="<<temp->data;
        delete temp;
    }


}
void keval::deletel()
{
    static Node *temp=NULL;
    static Node *k=NULL;

    temp=new Node();
    k=new Node();
    k=head;
    if(head==NULL)
    {
        cout<<"\nlist is empaty !!";
    }
    else 
    {
        while(k->next!=NULL)
        {
            temp=k;
            k=k->next;
        }
        temp->next=NULL;
        delete k;
    }
}
void keval::addl()
{
    int num;
    struct Node *temp=NULL;
    temp=new Node();
    struct Node *k=NULL;
    k=new Node();
    cout<<"  \n enter NUmber :";
    cin>>num;
    temp->data=num;
    temp->prev=NULL;
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        k=head;
        while (k->next!=NULL)
        {
            k=k->next;
        }
        k->next=temp;
        temp->prev=k;
        
    }

}

void keval::addf()
{
    int num;
    static Node *temp=NULL;
    temp=new Node();
    cout<<"\n Enter Number ";
    cin>>num;
    temp->next=NULL;
    temp->prev=NULL;
    temp->data=num;
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void keval::createl()
{
    int num;
    struct Node *temp=NULL;
    temp=new Node();
    struct Node *k=NULL;
    k=new Node();
    cout<<"  \n enter NUmber :";
    cin>>num;
    temp->data=num;
    temp->prev=NULL;
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        k=head;
        while (k->next!=NULL)
        {
            k=k->next;
        }
        k->next=temp;
        temp->prev=k;
        
    }
}
void keval::display()
{
    struct Node *temp=new Node();
    temp=head;
    while (temp!=NULL)
    {
       cout<<endl<<temp->data;
       temp=temp->next;
    }
    
}


int main()
{
    keval k;
    int c;
    while (true)
    {
        cout<<"\n\n0.  exitList";
        cout<<"\n1. Create Node";
        cout<<"\n2. Display Node";
        cout<<"\n3. add frist Node ";
        cout<<"\n4. add last Node";
        cout<<"\n5. delete frist Node ";
        cout<<"\n6. delete last Node ";
         cout<<"\n7. add location Node ";
        /*cout<<"\n8. delete location Node ";*/
        cout<<"\nEnter your choice : ";
        cin>>c;
        switch(c)
        {
            case 0:
                exit(0);
            case 1:
                k.createl();
                break;
            case 2:
                k.display();
                break;
            case 3:
                k.addf();
                break;
            case 4:
                k.addl();
                break;
            case 5:
               k.deleteF();
                break;
            case 6:
               k.deletel();
                break;
            case 7:
                k.addp();
           /* case 8:
                k.deletep();
                break;*/
        }
    }
}