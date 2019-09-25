#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n-1;j++)
				{
						if(a[j]>a[j+1])
								swap(a[j],a[j+1]);
				}
		}
}
int main()
{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		clock_t start=clock();
		bubble_sort(a,n);
		clock_t stop=clock();
		for(int i=0;i<n;i++)
		{
				cout<<a[i]<<" ";
		}
		cout<<endl;
		cout<<"The time taken is "<<stop-start<<" millisecond";
}
