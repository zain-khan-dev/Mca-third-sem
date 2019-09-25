#include<iostream>
#include<limits.h>
using namespace std;
void getsum(int c[],int n)
{
		int dp[100][100];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						dp[i][j]=0;
				}
		}
		for(int l=0;l<n;l++)
		{
			for(int i=0;i<n;i++)
			{
					for(int j=i;j>=0;j--)
					{
	
					}
			}
		}
}
int main()
{
		int n;
		cin>>n;
		int c[n];
		for(int i=0;i<n;i++)
		{
				cin>>c[i];
		}
		getsum(c,n);
}
