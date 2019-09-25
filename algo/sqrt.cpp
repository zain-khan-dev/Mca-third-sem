#include<iostream>
using namespace std;
int main()
{
		//babylonian method of computing square root
		double n;
		cin>>n;
		int i=0;
		double x=8;
		while(i!=20)
		{
				double temp=(x+n/x)/2;
				x=temp;
				i++;
		}
		cout<<x;
}
