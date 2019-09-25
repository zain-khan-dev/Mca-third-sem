#include<iostream>
typedef unsigned long long int ull;
using namespace std;
string decahex(ull n)
{
		string s="";
		while(n!=0)
		{
				if(n%16>=10)
				{
						s+=char(n%16+55);
				}
				else
				{
						s+=char(n%16+48);
				}
				n/=16;
		}
		return s;
}
int main()
{
		ull n;
		cin>>n;
		string s=decahex(n);
		for(int i=s.length()-1;i>=0;i--)
		{
				cout<<s[i];
		}

}
