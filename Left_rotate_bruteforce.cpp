#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements in to array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
