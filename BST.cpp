#include<iostream>
using namespace std;
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
}*root=NULL;
class keval
{
    public:
    void search()
    {
        int no,flag=0;
        cout<<"Enter the No to Search :";
	    cin>>no;
        struct tree *p=new tree;
        struct tree *prent=new tree;
        if(root->data==no)
        {
            flag=1;
        }
        else{
            p=root;
            while (p!=NULL)
            {
                prent=p;
                if(no==prent->data)
                {
                    flag=1;
                }
                if(no>p->data)
                {
                    p=p->right;
                }
                else
                    p=p->left;
            }
            
        }
        if(flag ==0)
		{
			cout<<"\nNot Found";
		}
		else
		{
			cout<<"\nFound";
		}
        
    }
    void postorder(struct tree *root)
    {
        if(root!=NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<" , ";
        }
    }
    void preorder(struct tree *root)
    {
        if(root!=NULL)
        {
            cout<<root->data<<" , ";
            preorder(root->left);
            preorder(root->right);
        }
    }
    void inorder(struct tree *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->data<<" , ";
            inorder(root->right);
        }
    }
    void create()
    {
        struct tree *p=new tree;
        struct tree *prent=new tree;
        struct tree *temp=new tree;
        int value;
        cout<<"enter value :";
        cin>>value;
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            p=root;
            while(p!=NULL)
            {
                prent=p;
                if(value<p->data)
                {
                    p=p->left;
                }
                else
                {
                    p=p->right;
                }

            }
            if(value<prent->data)
                prent->left=temp;
            else
                prent->right=temp;
            
        }
  
    }
};
int main()
{
	int ch;
	keval d;
	do{
	cout<<endl<<"0 For Exit"<<endl;
	cout<<"1 for Create binary List"<<endl;
	cout<<"2 for Inorder"<<endl;
	cout<<"3 for Preorder"<<endl;
	cout<<"4 for Postorder"<<endl;
	cout<<"5 for Search"<<endl;
	cout<<"Enter the Choice:";
	cin>>ch;
		switch(ch)
		{
			case 0: break;
			case 1:d.create();
				      break;
			case 2:d.inorder(root);
					break;
			case 3:d.preorder(root);
				      break;
			case 4:d.postorder(root);
				      break;
			case 5:d.search();
				      break;
		
        }
	}while(ch!=0);
}