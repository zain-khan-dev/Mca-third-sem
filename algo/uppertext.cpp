#include<iostream>
using namespace std;
string convert(string s)
{
		for(int i=0;i<s.length();i++)
		{
				if(s[i]==' ')
				{
						continue;
				}
				else
				{
						if(s[i]>=97&&s[i]<=122)
						{
								s[i]=s[i]-32;
						}
				}
		}
		return s;
}
int main()
{
		string s;
		getline(cin,s);
		s=convert(s);
		cout<<s;
}
