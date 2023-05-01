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
    void deletepos()
    {
        struct Node *p=new Node();
        struct Node *pprev=new Node();
        struct Node *pnext=new Node();
        int pos;
        cout<<"\nenter location to delete node :";
        cin>>pos;
        int count=0;
        struct Node *a=new Node();
        if(head==NULL)
        {
            cout<<"\nlist is emapty !!";
        }
        else
        {
            a=head;
            while (a->next!=head)
            {
                a=a->next;
                count++;
            }
            if(count==0)
            {
               cout<<"\ndelete Node is : "<<head->data;
               head=NULL;
            }
            else
            {
                p=head;
                for(int i=1;i<pos;i++)
                {
                    p=p->next;
                }
                pprev=p->prev;
                pnext=p->next;

                pprev->next=pnext;
                pnext->prev=pprev;

                cout<<"delete node is -> "<<p->data;
                delete p;
            }
    }
}
    void addpos()
    {
        struct Node *temp=new Node();
        struct Node *p=new Node();
        struct Node *pprev=new Node();
        int value,loc;
        cout<<"enter location ";
        cin>>loc;
        cout<<"enter value";
        cin>>value;
        temp->data=value;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            head->next=head;
            head->prev=head;
        }
        else
        {
            p=head;
            for(int i=1;i<loc;i++)
            {
                
                p=p->next;
            }
            pprev=p->prev;

            pprev->next=temp;
            temp->prev=pprev;

            p->prev=temp;
            temp->next=p;
        }
    }
    void deletefirst()
    {
        int count=0;
        struct Node *a=new Node();
        if(head==NULL)
        {
            cout<<"\nlist is emapty !!";
        }
        else
        {
            a=head;
            while (a->next!=head)
            {
                a=a->next;
                count++;
            }
            if(count==0)
            {
               cout<<"\ndelete Node is : "<<head->data;
               head=NULL;
            }
            else
            {
                struct Node *p=new Node();
                struct Node *l=new Node();
                p=head;
                l=p->prev;
                head=p->next;

                head->prev=l;
                l->next=head;

                cout<<"\ndelete Node is : "<<p->data;
                delete p;
            }

    }
}
    void deletelast()
    {
        int count=0;
        struct Node *p=new Node();
        struct Node *sl=new Node();
        struct Node *a=new Node();
        if(head==NULL)
        {
            cout<<"\nlist is emapty !!";
        }
        else
        {
            a=head;
            while (a->next!=head)
            {
                a=a->next;
                count++;
            }
            if(count==0)
            {
               cout<<"\ndelete Node is : "<<head->data;
               head=NULL;
            }
            else
            {
                p=head->prev;
                sl=head->prev->prev;
                sl->next=head;
                head->prev=sl;
                cout<<"\ndelete Node is : "<<p->data;
                delete p;
            }
        }

    }
    void addfirst()
    {
        struct Node *p=new Node();
        struct Node *last=new Node();
        struct Node *temp=new Node();
        int value;
        cout<<"enter value :";
        cin>>value;
        temp->data=value;
        temp->next=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            head->prev=head;
            head->next=head;
        }

        p=head->prev;

        temp->next=head;
        head->prev=temp;

        temp->prev=p;
        p->next=temp;

        head=temp;

        
    }
    void createl()
    {
        struct Node *temp=new Node();
        struct Node *p=new Node();
        int value;
        cout<<"enter value :";
        cin>>value;
        temp->data=value;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            head->prev=head;
            head->next=head;
        }
        else
        {
            p=head;
            while (p->next!=head)
            {
               p=p->next;
            }
            p->next=temp;
            temp->prev=p;
            temp->next=head;
            head->prev=temp;
        }
    }
    void dispaly()
    {
        if(head==NULL)
        {
            cout<<"list is emapty !!";

        }
        else
        {
            struct Node *p=new Node();
            p=head;
            while(p->next!=head)
            {
                cout<<p->data<<"->";
                p=p->next;
            }
            cout<<p->data;
        }
    }
};
int main()
{
    keval k;
    int ch;
    while (true)
    {
        cout<<"\npress 0. exit";
        cout<<"\npress 1.create list";
        cout<<"\npress 2.dislapy list";
        cout<<"\npress 3.add first node list";
        cout<<"\npress 4.delete last node list";
        cout<<"\npress 5.delete first node list";
        cout<<"\npress 6.add location wise node from the list ";
        cout<<"\npress 7.delete location wise node from the list ";
        cout<<"\nenter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            k.createl();
            break;
        case 2:
            k.dispaly();
            break;
        case 3:
            k.addfirst();
            break;
        case 4:
            k.deletelast();
            break;
        case 5:
            k.deletefirst();
            break;
        case 6:
            k.addpos();
            break;
        case 7:
            k.deletepos();
            break;
        }
    }
    
}