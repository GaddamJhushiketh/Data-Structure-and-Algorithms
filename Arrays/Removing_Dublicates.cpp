#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" Enter the number elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]!=a[i])
			{
				i++;
				a[i]=a[j];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
