#include <iostream>
using namespace std;
class keval
{
    public:
    int a[6]={3,50,11,21,5,24},flag=0,n=11;
    void demo()
    {
        for(int i=0;i<=6;i++)
        {
            if(a[i]==n)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"not found";
        else
            cout<<"found";
    }
};
int main()
{
    keval k;
    k.demo();
}