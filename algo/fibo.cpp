#include<iostream>
#include<time.h>
typedef unsigned long long int ull;
using namespace std;
ull recurfibo(ull n)
{
		if(n<=2)
				return 1;
		else
				return recurfibo(n-1)+recurfibo(n-2);
}
ull iterfibo(ull n)
{
		if(n<=2)
				return 1;
		else
		{
				int p=2;
				ull a=1,b=1;
				while(p!=n)
				{
						ull temp=a+b;
						a=b;
						b=temp;
						p++;
				}
				return b;
		}
}
int main()
{
		ull  n;
		cin>>n;
		clock_t start=clock();
		cout<<iterfibo(n)<<endl;
		double p=(double)clock()-start;
		cout<<"the time taken in miliseconds using iterative function is "<<p<<endl;
		start=clock();
		cout<<recurfibo(n)<<endl;
		p=clock()-start;
		cout<<"The time taken by the recursive function in milliseconds is "<<p<<endl;
		cout<<"All the fibonacci numbers from 1 to "<<n<<" are"<<endl;
		for(int i=1;i<=n;i++)
		{
				cout<<iterfibo(i)<<" ";
		}
		//the recursive function is faster for values less than 18 after that iterative function is faster
}
