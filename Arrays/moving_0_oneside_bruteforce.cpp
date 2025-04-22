#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,j=0;
	cout<<"Enter the size of array :";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the Elements in to array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int> first(n, 0);
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            first[j++] = arr[i];
        }
    }
	for(int i=0;i<n;i++)
	{
		arr[i]=first[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
