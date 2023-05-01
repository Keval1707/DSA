//Bubble Sort: Swaping the value with adjacent element
#include<iostream>
using namespace std;

int main()
{
	int ar[10],i,j,temp;
	cout<<"Enter the Array ELements";
	
	for(int i=0;i<10;i++)
	{
		cin>>ar[i];
	}
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<(10-i-1);j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
			
			
		}
	}
	
	cout<<"Sorted Order Array";
	for(i=0;i<10;i++)
	{
		cout<<ar[i];
		
	}
	
	
}