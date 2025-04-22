#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
   int n;
   cout<<"Entre the number of elements: "<<" ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the  Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
