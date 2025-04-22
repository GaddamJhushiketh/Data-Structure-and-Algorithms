// replace dublicates in array  with zeros
#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout<< "The number of elements in array: "<<endl;
    cin>>a;
    int b[a];
    cout<< "Enter the elements in to array :"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    cout<<"The array of elements are: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<b[i]<<" ";
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(b[i]==b[j]&& b[i]!=0)
            {
                b[j]=0;
            }
        }         
    }
    cout<<"The array of elements  after replacing dublicates are: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<b[i]<<" ";
    }

}