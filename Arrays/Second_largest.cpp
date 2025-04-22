#include<iostream>
using namespace std;
int main(){
	int n,sec,max=0;
	cout <<"number of elements :";
	cin>>n;
	int i, a[n];
	cout<< " Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			max=a[i];
		}
	}
	sec=a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>sec && a[i]<max)
		{
			sec=a[i];
		}
	}
	cout<<"the second largest number is: "<<sec;
	return 0;
}
