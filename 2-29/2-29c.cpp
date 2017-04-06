#include <iostream>
using namespace std;

bool spy(int x);

int main()
{
        int n;
        cout<<"请输入一个数："<<endl;
        cin>>n;
        cout<<n<<"以内的质数是：";
        for (int x=1;x<=n;x++)
        {
             if(spy(x))
                cout<<x<<' ';
        }
        return 0;
}




bool spy(int x){
     int count=0;   //记录一个数的因子的个数
     bool a;
     for (int k=1;k<=x;k++)
	{
          if (x%k==0)    //求一个数的因子
	     count+=1;
        }
        if (count==2)    //判断是否是质数，质数的因子个数是2（1和其自身）
        a=true;
        else
        a=false;
        return a;
}

