#include<iostream>
#define MAX 10
using namespace std;
int main()
{
	int a[MAX];
	int b,i,flag=0;
	cout<<"Enter the no of elements: "<<endl;
	 cin>>b;
	cout<<"Enter the values in to array: "<<endl;
	for(i=0;i<b;i++)
		cin>>a[i];
	for(i=0;i<b-1;i++)
	{
		if(a[i]<a[i+1])
		 continue;
		else
		{
		flag=-1;
		break;
	    }
		
	}
	if(flag == -1)
		cout<<"Array is not sorted"<<endl;
	else
	{
	 cout<<"Array is sorted and elements are: ";
	 for(i=0;i<b;i++)
		cout<<a[i]<<" ";
	}
}
