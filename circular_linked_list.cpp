#include <iostream>
using namespace std;

int main()
{
     int a[3][3],count=0;

	 for(int i=0;i<3;i++)
	 {
		for(int j=0;j<3;j++)
		{

			cout<<"Enter element "<<j<<" :";
			cin>>a[i][j];
		}
	}

	for(int i=0;i<9;i++)
	 {
		for(int j=0;j<9;j++)
		{
			if(a[i][j]==0)
			{
				count++;
			}
		}
	}

	if(count>5)
	{
		cout<<"sparce matrix"<<endl;
	}
	else
		cout<<"not sparce matrix"<<endl;





}