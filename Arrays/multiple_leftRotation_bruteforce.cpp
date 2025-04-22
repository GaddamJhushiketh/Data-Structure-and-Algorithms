#include<iostream>
using namespace std;
int main()
{
	int n,j,i;
	cout<<"Enter the size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements in to array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cout<<"Enter the no.of rotations :";
	cin>>k;
	int first;
	for(j=0;j<k;j++)
	{
	first=arr[0];
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=first;
    }
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
