#include<iostream>
using namespace std;
int min(int a,int b,int c)
{
		return min(a,min(b,c));
}
void edit(char a[],int n,char b[],int m)
{
		int p[n+1][100];
		for(int i=0;i<=n;i++)
		{
				p[i][0]=i;
		}
		for(int j=0;j<=m;j++)
		{
				p[0][j]=j;
		}
		for(int i=1;i<=n;i++)
		{
				for(int j=1;j<=m;j++)
				{
						if(a[i-1]==b[j-1])
						{
								p[i][j]=p[i-1][j-1];
						}
						else
						{
								p[i][j]=min(p[i-1][j]+1,p[i][j-1]+1,p[i-1][j-1]+2);
						}
				}
		}
}
int main()
{
		int n,m;
		cin>>n;
		char a[n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		cin>>m;
		char b[m];
		for(int i=0;i<m;i++)
		{
				cin>>b[i];
		}
		edit(a,n,b,m);
}
