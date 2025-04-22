#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout<<"Entre the number of elements: "<<" ";
    cin >> n;
    vector<int> v(n);
    cout<<"Enter the  Elements: "<<endl;
    for (int i = 0; i < n; ++i) 
    {
      cin >> v[i];
    }
    int pos;
    cout<<"Enter the position: "<<" "; 
    cin >> pos;
    v.erase(v.begin() + (pos - 1));
    int a, b;
    cout<<"Enter the Range: "<<" ";
    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) 
    {
      cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
