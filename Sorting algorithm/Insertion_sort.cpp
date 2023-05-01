#include <iostream>
using namespace std;
int main()
{
    int a[5]={10,30,20,50,40}, tot, i, j, k, crunt, index;

   for(i=0;i<=5;i++)
   {
        crunt=a[i];
        j=i-1;
        while (a[j]>crunt && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=crunt;
        
   }

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
}