//creating mearge sorting 
#include<iostream>
using namespace std;
void merge( int b[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int lb[n1],rb[n2];
    for(int i=0;i<n1;i++)
     lb[i]=b[i+low];
    for(int j=0;j<n2;j++)
     rb[j]=b[j+mid+1];
    int i=0,j=0,k=low;
    while(i<n1&&j<n2)
    {
        if(lb[i]<=rb[j])
        {
            b[k]=lb[i];
            i++;
        }
        else
        {
            b[k]=rb[j];
            j++;
        }   
        k++;
    }
    while(i<n1)
    {
        b[k]=lb[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        b[k]=rb[j];
        j++;
        k++;
    }
}
void mergesort(int b[], int low,int high)
{
  if(low<high)
  {
    int mid=low+(high-low)/2;
    mergesort(b,low,mid);
    mergesort(b,mid+1,high);
    merge(b,low,mid,high);
  }
}
void printarr( int b[],int a)
{
    for(int i=0;i<a;i++)
      cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{
    int a;
    cout<< "The number of elements in array: "<<endl;
    cin>>a;
    int b[a];
    cout<< "Enter the elements in to array :"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    cout<<"Array before sorting: "<<endl;
    printarr(b,a);
    mergesort(b,0,a-1);
    cout<<"Array after sorting: "<<endl;
    printarr(b,a);
    return 0;
}
