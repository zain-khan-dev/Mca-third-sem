#include<iostream>
#include<stack>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int a[n][n];
		int p[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>a[i][j];
						p[i][j]=0;
				}
		}
	
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						for(int k=0;k<n;k++)
						{
								if(j==i&&k==i)
								{
										continue;
								}
								else
								{
										if(a[k][i]+a[i][j]<a[k][j])
										{
												a[k][j]=a[k][i]+a[i][j];
												p[k][j]=i;
										}
								}
						}

				}
		}
		while(true)
		{
			cout<<"Enter the source and destination you want the minimum path for or enter 0 to exit ";
			cout<<endl;
			int pt;
			cin>>pt;
			if(pt==0)
					return 0;
			int source,dest;
			source=pt;
			cin>>dest;
			int pi=dest;
			cout<<"The minimum path is ";
			cout<<"v"<<source<<"->";
			source--;
			dest--;
			stack<int> s;	
			while(p[source][dest]!=0)
			{
				s.push(p[source][dest]+1);
				dest=p[source][dest];
			}

			while(!s.empty())
			{
					cout<<"v"<<s.top()<<"->";
					s.pop();
			}
			cout<<"v"<<pi;
			pi--;
			cout<<endl;
			cout<<"The minimum distance is "<<a[source][pi];
			cout<<endl;
			cout<<endl;
		}

}
