#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i,k,j=0;
	cout<<"Enter the size of array :";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the Elements in to array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to serch: ";
	cin>>k;
    int flag=0;
    for(i=0 ; i<n;i++)
    {
        if(arr[i]==k)
        {
          cout<<"true";
          break;
        }
    }
    if(i==n)
    {
    	cout<<"false";
	}
return 0;
}
