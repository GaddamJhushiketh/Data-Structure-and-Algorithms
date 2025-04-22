#include<iostream>
using namespace std;
int main()
{
	int n,count=0,MAX=0;;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elemenets in to array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Maximum Consecutive One's in the array: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
        MAX=max(MAX,count);
    }
    cout<<MAX;
}
