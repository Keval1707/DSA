//Binary Search

#include<iostream>
using namespace std;

int main()
{
	int ar[100],no,val,start,end,mid,flag=0;
	cout<<"Enter the Array Size";
	cin>>no;
	
	for(int i=0;i<no;i++)
	{
		cin>>ar[i];
	}
	start=0;
	end=no;
	
	cout<<"Enter the Element to be search:";
	cin>>val;
	
	while(start<=end)
	{
		mid=(end-1)/2;
		if(ar[mid]==val)
		{
			cout<<"Element Found";
			flag=1;
		}
		else if(ar[mid]>val)
		{
			start=mid+1;
		}
		else
		{
			
			end=mid-1;	
		}
	}
	
	if(flag==1)
	{
		cout<<"Found";
	}
	else
	{
		cout<<"Not Found";
	}
	
}