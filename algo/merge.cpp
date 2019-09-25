#include<iostream>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
		int n=mid-l+1;
		int la[n];
		int m=r-mid;
		int ra[m];
		int j=0;
		for(int i=l;i<=mid;i++)
		{
				la[j]=a[i];
				j++;
		}
		j=0;
		for(int i=mid+1;i<=r;i++)
		{
				ra[j]=a[i];
				j++;
		}
		int k=0;
		j=0;
		int p=l;
		while(j!=n&&k!=m)
		{
				if(la[j]<ra[k])
				{
						a[p]=la[j];
						j++;
				}
				else
				{
						a[p]=ra[k];
						k++;
				}
				p++;
		}
		if(j==n)
		{
				while(k!=m)
				{
						a[p]=ra[k];
						k++;
						p++;
				}

		}
		if(k==m)
		{
				while(j!=n)
				{
						a[p]=la[j];
						p++;
						j++;
				}
		}
}
void merge_sort(int a[],int l,int r)
{
		if(l<r)
		{
			int mid=(l+r)/2;
			merge_sort(a,l,mid);
			merge_sort(a,mid+1,r);
			merge(a,l,mid,r);
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
		merge_sort(a,0,n-1);
		clock_t stop=clock();
		cout<<"The sorted array is"<<endl;
		for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
		cout<<endl;
		cout<<"The time taken for the sorting is "<<stop-start<<" milliseconds";
}
