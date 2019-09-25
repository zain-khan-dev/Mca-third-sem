#include<iostream>
using namespace std;
int main()
{
		int n;
		cout<<"Enter the number of strings";
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		cout<<endl;
		for(int k=0;k<n;k++)
		{
			cout<<k+1<<"gram started"<<endl<<endl;
				for(int j=0;j<n-k;j++)
				{
						for(int i=j;i<=j+k;i++)
						{
								cout<<s[i]<<" ";
						}
						cout<<endl;
				}	
				cout<<endl;
		}
}
