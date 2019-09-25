#include<iostream>
#include<algorithm>
using namespace std;
int linear_search(int a[],int n,int x)
{
		for(int i=0;i<n;i++)
		{
				if(a[i]==x)
						return i;
		}
		return -1;
}
int binary_search(int a[],int low,int high,int x)
{
		if(low<=high)
		{
				int mid=(low+high)/2;
				if(a[mid]==x)
						return mid;
				else
						if(a[mid]>x)
								return binary_search(a,low,mid-1,x);
				else
						return binary_search(a,mid+1,high,x);
		}
		return -1;
}
int main()
{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		int x;
		cout<<"enter the number to  be searched"<<endl;
		cin>>x;
		clock_t start=clock();
		int index=linear_search(a,n,x);
		clock_t stop=clock();
		if(index==-1)
		{
				cout<<"Not found"<<endl;
		}
		else
		{
				cout<<"found the value at the position"<<index+1<<endl;
		}
		cout<<"The amount of time taken is "<<stop-start<<" milliseconds"<<endl;
		sort(a,a+n);
		start=clock();
		index=binary_search(a,0,n-1,x);
		stop=clock();
		if(index==-1)
		{
				cout<<"Not found"<<endl;
		}
		else
		{
				cout<<"The number is found at "<<index+1<<endl;
		}
		cout<<"The time taken is "<<stop-start<<endl;

}
