#include <iostream>
using namespace std;

int spy1(int m,int n)
{
    int val,k;
    if (m<=n)
        for(k=m;k>0;k--)
        {
           if ((m%k==0)&&(n%k==0))
               {
                val=k;
                break;
               }
        }
     else
        for(k=n;k>0;k--)
        {
           if ((m%k==0)&&(n%k==0))
           {
                val=k;
                break;
           }
        }
   return val;
}

int spy2(int m,int n)
{
    int val,k;
    if(m==n)
        val=m;
    else if (m>n)
        for (k=1;k<=n;k++)
        {
        if ((k*m)%n==0)
              {
                val=k*m;
                break;
              }
        }
    else
    for(k=1;k<=m;k++)
        {
        if ((k*n)%m==0)
            {
                val=k*n;
                break;
            }
        }
    return val;
}


int main()
{
    int m,n;
    cout<<"输入两个正整数："<<endl;
    cin>>m>>n;
    cout<<"它们的最大公因数是："<<spy1(m,n)<<endl;
    cout<<"它们的最小公倍数是："<<spy2(m,n)<<endl;
    return 0;
}
