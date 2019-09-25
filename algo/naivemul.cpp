#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int a[n][n],b[n][n];
		cout<<"enter the first matrix"<<endl;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
		}
		cout<<endl;
		cout<<"enter the second matrix"<<endl;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>b[i][j];
				}
		}
		cout<<endl;
		int c[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						int sum=0;
						for(int k=0;k<n;k++)
						{
								sum+=a[i][k]*b[k][j];
						}
						c[i][j]=sum;
				}
		}
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cout<<c[i][j]<<" ";
				}
				cout<<endl;
		}
}

