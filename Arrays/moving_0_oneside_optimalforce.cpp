#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,j=0;
	cout<<"Enter the size of array :";
	cin>>n;
	int e=n-1;
	vector<int> arr(n);
	cout<<"Enter the Elements in to array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{
	 if(arr[i]!=0)
	 {
	 	arr[e]=arr[i];
	 	e--;
	 }
	}
	while(e>=0)
	{	
		arr[e]=0;
		e--;
	}
	for(int i=0;i<n;i++)
	{
	  cout<<arr[i]<<" ";
	}
}
