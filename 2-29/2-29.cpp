#include <iostream>
using namespace std;

int main()
{
        cout<<"质数是:";
	for (int n=1;n<=100;n++)
	{
	   int count=0;   //记录一个数的因子的个数

		for(int k=1;k<=n;k++)
		{
			 if (n%k==0)    //求一个数的因子
		        count+=1;
		}

		if (count==2)    //判断是否是质数，质数的因子个数是2（1和其自身）
                cout<<n<<' ';
	}
	return 0;
}
