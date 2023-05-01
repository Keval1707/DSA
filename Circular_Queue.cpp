//Circular Queue

#include<iostream>
using namespace std;

class Que{
		
		int r,f;

	public:
		Que()
		{
			 r=-1;
			 f=-1;
		}
		int q[5];
		void enque();//insertion
		void deque();//deletion
		void display();//display
		void isEmpty();//stack is underflow
	
};

void Que::display()
{
	if(f==-1)
	{
			cout<<"Circular Queue is Empty";
	}
	else
	{
		if (r >= f) 
		{
				
			for(int i=f;i<=r;i++)
			{
				cout<<q[i]<<endl;
			}
		}			
		else 
		{ 
			for (int i = f; i<5; i++) 
			    cout<<q[i]<<"\n "; 
		   
			for (int i = 0; i <= r; i++) 
			cout<<q[i]<<"\n "; 
		} 
	}
}


void Que::deque()
{
	 if(f == -1 && r == -1)
	{
		cout<<"Q is Empty";
	}
	else
	{
		
		cout<<"Deleted Element is :"<<q[f];
			f++;
		
			if(f-1 == r)
			{
				f = r = -1;
			}

		}
	
	
}
void Que::enque()
{
	int x;
	 if((f == 0 && r == 5 - 1) || (f == r+1))
	{
			cout<<"Q is Full";
	}	
	else
	{
		
		if(r == 5-1 && f != 0)
		{
			r=0;
		}
		
		if(f==-1)
		{
				f=0;
		}
		
		cout<<"Enter the Element:";
		cin>>x;
		r++;
		q[r]=x;
		
	}

		
}

int main()
{
	Que q;
	int ch;
	
	do{
		cout<<endl;
		cout<<"Press 1. for Insert"<<endl;
		cout<<"Press 2. for Delete"<<endl;
		cout<<"Press 3. for Display"<<endl;
		cout<<"Press 4. for Exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		
			switch(ch)
			{
				case 1: q.enque();
					     break;
				case 2: q.deque();
					     break;
				case 3: q.display();
					     break;
				case 4:exit(0);
				
			}
				
	}while(ch!=4);
	return 0;	
}
