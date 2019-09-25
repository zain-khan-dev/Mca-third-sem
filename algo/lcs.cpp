#include<iostream>
#include<stack>
using namespace std;
int dp[100][100];
void getpath(char a[],char b[],int n,int m)
{
		stack<char> s;
		int i=n,j=m;
		while(j!=0&&i!=0)
		{
				if(a[i]==b[j])
				{
						s.push(a[i]);
						i--,j--;
				}
				else
				{
						if(dp[i-1][j]>dp[i][j-1])
						{
								i--;
						}
						else
								j--;
				}
		}
		while(!s.empty())
		{
				cout<<s.top();
				s.pop();
		}
}
void lcs(char a[],char b[],int n,int m)
{
		for(int i=0;i<100;i++)
		{
				dp[i][0]=0;
				dp[0][i]=0;
		}
		for(int i=1;i<=n;i++)
		{
				for(int j=1;j<=m;j++)
				{
						if(a[i]==b[j])
						{
								
								dp[i][j]=dp[i-1][j-1]+1;
						}
						else
						{
								dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
						}
				}
		}
	
}
int main()
{
		int n,m;
		cin>>n;
		char a[n+1],b[m+1];
		for(int i=1;i<=n;i++)
		{
				cin>>a[i];
		}
		cin>>m;
		for(int j=1;j<=m;j++)
		{
				cin>>b[j];
		}
		lcs(a,b,n,m);
		getpath(a,b,n,m);
}
