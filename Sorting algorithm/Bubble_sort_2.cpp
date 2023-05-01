#include<iostream>
using namespace std;
int main()
{
    int a[6]={3,50,11,21,5,24},flag=0,n=11;
    for (int i = 0; i <=6; i++)
    {
        for (int j = i; j <7-1; j++)
        {
            if (a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            
        }
        
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<endl;
    }
}