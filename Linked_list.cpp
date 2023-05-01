    #include<iostream>
    using namespace std;

    struct node
    {
        int data;
        struct node *next;
        struct node *prev;

    }*head = NULL;

    class keval
    {

        public :
        
            void CreateList()
            {
            struct node *temp=new node();
            int no;
            cout<<"enter the no :";
            cin>>no;
            temp->data=no;
            temp->prev=NULL;
            temp->next=NULL;
            if(head==NULL)
            {
                    head=temp;
            }
            else{
                struct node *p=new node();
                p=head;
                while(p->next !=NULL)
                {
                    p=p->next;
                }
                p->next=temp;
            }
            }

            void Display()
            {
            struct node *p=new node();
            p=head;
            cout<<"NULL -< ";
            while(p !=NULL)
            {
                cout<<p->data<<"->";
                p=p->next;
            }
            cout<<"NULL";
            }

            void AddLast()
            {
            
            }

            void AddFirst()
            {
            
            }

            void PoAdd()
            {
                struct node *temp=new node();
                struct node *p=new node();
                struct node *r=new node();
                    int pos;
                int value;
                cout<<"\n enter the position :";
                cin>>pos;
                
                cout<<"\n enter the value:";
                cin>>value;
                temp->data=value;
                p=head;
                for(int i=1;i<pos;i++)
                {
                    p=p->next;
                }
                r=p->prev;
                temp->prev=p->prev;
                p->prev=temp;
                temp->next=p;
                r->next=temp;

            }

            void PoDelete()
            {
                struct node *p=new node();
                struct node *r=new node();
                struct node *s=new node();
                
                int pos;
                cout<<"enetr the positio  :";
                cin>>pos;
                p=head;
                for(int i=1;i<pos;i++)
                {
                    p=p->next;
                }
                r=p->prev;
                s=p->next;
                r->next=s;
                s->prev=r;
                delete p;

            
            }

            void DeleteLast()
            {

            

                
                
            }

            void DeleteFirst()
            {
                struct node *temp=new node();
                struct node *p=new node();
                p=head;
                temp=p->next;
                head=temp;
                delete p;
            

            }



    };

    int main()
    {
        keval kp;
        int num;

        while (true)
        {
            cout<<"\n\n0. Exit";
            cout<<"\n1. Crate List";
            cout<<"\n2. Display";
            cout<<"\n3. Add Last";
            cout<<"\n4. Add First";
            cout<<"\n5. Position Add";
            cout<<"\n6. Position Delete";
            cout<<"\n7. Delete Last";
            cout<<"\n8. Delete First";

            cout<<"\nEnter your Choise :";
            cin>>num;

            switch (num)
            {
                case 0:
                    exit(0);
                case 1:
                    kp.CreateList();
                    break;
                case 2:
                    kp.Display();
                    break;
                case 3:
                    kp.AddLast();
                    break;
                case 4:
                    kp.AddFirst();
                    break;
                case 5:
                    kp.PoAdd();
                    break;
                case 6:
                    kp.PoDelete();
                    break;
                case 7:
                    kp.DeleteLast();
                    break;
                case 8:
                    kp.DeleteFirst();
                    break;
            }

        }
        


    }