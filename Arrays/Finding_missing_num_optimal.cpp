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
    int sum1=0,sum2=(n*(n+1))/2;
    for(int i=0;i<=n-1;i++)
    {
      sum1+=arr[i];
    }
    cout<<"Missing Number: "<<sum2-sum1;
}
