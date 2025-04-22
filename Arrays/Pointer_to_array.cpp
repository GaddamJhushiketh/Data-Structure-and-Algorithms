//POINTER TO ARRAY
#include<iostream>
using namespace std;
int main()
{
int (*p)[2];
int A[6]={10,20,30,40,50,60};
p=(int (*)[2])&A[0];
cout<<"values of first set of array: ";
cout<<(*p)[1]<<endl;
p=p+1;
p=p+1;
cout<<"value of second set of arrays: ";
cout<<(*p)[1]<<endl;
}
