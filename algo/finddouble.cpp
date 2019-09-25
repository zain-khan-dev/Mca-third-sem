#include<iostream>
using namespace std;
void find(int a[][50],int i,int j,int n,int m,int x)
{

		if(i>n||j<0)
		{
				cout<<"Not found";
				return;
		}
		else
		{
				if(a[i][j]==x)
				{
						cout<<"The value is present at the index "<<i+1<<" "<<j+1<<endl;
						return;
				}
				if(a[i][j]<x)
				{
						find(a,i+1,j,n,m,x);
				}
				else
				{
						find(a,i,j-1,n,m,x);
				}
		}	
}
int main()
{
		int n,m;
		cin>>n>>m;
		int a[n][50];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<m;j++)
				{
						cin>>a[i][j];
				}
		}
		int x;
		cout<<"Enter the element to be found  ";
		cin>>x;
		find(a,0,m,n,m,x);
}
