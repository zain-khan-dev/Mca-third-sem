#include<iostream>
using namespace std;
int partition(int a[],int l,int r)
{
		int pivot=a[r];
		int j=l-1;
		for(int i=l;i<=r-1;i++)
		{
				if(a[i]<pivot)
				{
						j++;
						swap(a[i],a[j]);
				}
		}
		swap(a[r],a[j+1]);
		return j+1;
}
void quicksort(int a[],int l,int n)
{
		if(l<n)
		{
			int p=partition(a,l,n);
			quicksort(a,l,p-1);
			quicksort(a,p+1,n);
		}
}
int main()
{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
				cin>>a[i];
		clock_t start=clock();
		quicksort(a,0,n-1);
		clock_t stop=clock();
		cout<<"The sorted array is"<<endl;
		for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
		cout<<endl;
		cout<<"The time taken in milliseconds is "<<stop-start<<endl;

}
