#include<iostream>
using namespace std;
int horner(int a[],int n,int x)
{
		int sum=a[0];
		for(int i=1;i<=n-1;i++)
		{
				sum=sum*x+a[i];
		}
		return sum;
}

int main()
{
		int n;
		cin>>n;
		int a[n];
		int x;
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		cin>>x;
		cout<<horner(a,n,x);
}
