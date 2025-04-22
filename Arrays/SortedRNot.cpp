#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" Enter the number elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<=arr[i+1])
		{
			continue;
		}
		else
		{
		 cout<<"unsorted";
		 return 0;
		}
	}
	cout<<"sorted";
	return 0;
}
