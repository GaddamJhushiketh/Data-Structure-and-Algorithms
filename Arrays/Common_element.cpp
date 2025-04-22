#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter the size of two arrays: ";
	cin>>n>>m;
	int i,j,a[n],b[j];
	cout<<"enter the elements in to arrays-1: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the elements in to arrays-2: ";
	for(j=0;j<m;j++)
	{
		cin>>b[j];
	}
	cout<<"the common elements are : ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				cout<<a[i]<<" ";
			}
		}
	}
return 0;	
}
