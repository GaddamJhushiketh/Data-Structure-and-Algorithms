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
    for(int i=0;i<n;i++)
    {
    	int flag=0;
    	for(int j=0;j<n;j++)
    	{
		if(arr[j]==i)
		{
			flag=1;
		}	
		}
		if(flag==0)
		{
			cout<<"Missing num: "<<i;
			break;
		}
	}
	return 0;
	
}
