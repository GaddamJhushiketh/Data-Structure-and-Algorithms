#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n=arr.size();
        int largest=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
    }
};
