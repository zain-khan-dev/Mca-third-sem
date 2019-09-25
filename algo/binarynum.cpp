#include<iostream>
#include<cmath>
using namespace std;
string getbinary(int n)
{
		string s="";
		while(n!=0)
		{
				s+=char(n%2+48);
				n/=2;
		}
		return s;
}
int main()
{
		unsigned long long int n;
		cout<<"Enter the number to be converted to binary"<<endl;
		cin>>n;
		string s;
		int p=n;
		n=pow(2,n);
		for(int i=0;i<n;i++)
		{
			s=getbinary(i);
			for(int j=p;j>s.length();j--)
			{
					cout<<"0";
			}
			for(int i=s.length()-1;i>=0;i--)
					cout<<s[i];
			cout<<endl;
		}
}

