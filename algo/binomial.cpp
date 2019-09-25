#include<iostream>
#include<chrono>
#include<ctime>
#define ck std::chrono::high_resolution_clock::
#define ch std::chrono::
#define ull unsigned long long int
using namespace std;
unsigned long long int bin0(unsigned long long int n,unsigned long long int r)
{
		if(n<r)
				return 0;
		if(n==0||r==0||n<=r)
		{
				return 1;
		}
		else
		{
				return bin0(n-1,r-1)+bin0(n-1,r);
		}
}

unsigned long long int dp[100][100];
unsigned long long int bin1(unsigned long long int n,unsigned long long int r)
{
		if(n<r)
				return 0;
		if(r==0||n==r)
				return 1;
		for(unsigned long long int i=0;i<=n;i++)
		{
				dp[i][0]=1;
				dp[i][i]=1;
		}
		for(unsigned long long int i=1;i<=n;i++)
		{
				for(unsigned long long int j=1;j<=r;j++) 
				{
						dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
				}
		}
		return dp[n][r];
}
ull min(ull a,ull b)
{
		if(a<b)
				return a;
		else
				return b;
}
ull bin2(ull n,ull r)
{
		int a[r+1];
		for(ull i=0;i<=r;i++)
				a[i]=0;
		for(ull i=0;i<=n;i++)
		{
				ull j=min(i,r);
				while(j!=-1)
				{
					if(j==i||j==0)
					{
							a[j]=1;
					}
					else
					{
							a[j]=a[j]+a[j-1];
					}
					j--;
				}
			}
		return a[r];
}
 int main()
{
		unsigned long long int n,r;
		cin>>n;
		cin>>r;
		clock_t start,stop;
		start=clock();
		ck time_point t1=ck now();
		cout<<bin0(n,r);
		ck time_point t2=ck now();
		cout<<endl;
		ch duration<double> time=ch duration_cast<ch duration<double> >(t2-t1);
		cout<<"The time taken by naive divide and conquor algorithm in seconds  is "<<time.count()<<" seconds";
		t1=ck now();
		cout<<endl;
		cout<<bin1(n,r);
		t2=ck now();
		cout<<endl;
		time=ch duration_cast<ch duration<double> >(t2-t1);
		cout<<"The time taken by 2 dimensional dynamic programming in seconds is "<<time.count()<<" seconds"<<endl;
		t1=ck now();
		cout<<bin2(n,r);
		t2=ck now();
		cout<<endl;
		 time=ch duration_cast<ch duration<double> >(t2-t1);
		cout<<"The time taken by 1 dimensional dynamic programming in seconds is "<<time.count()<<" seconds"<<endl;

}
