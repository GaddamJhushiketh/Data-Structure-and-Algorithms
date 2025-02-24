#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int largest = arr[0];  // Initialize largest with the first element
        for(int i = 1; i < n; i++) {  // Start from the second element
            if(arr[i] > largest) {
                largest = arr[i];  // Update largest if a larger element is found
            }
        }
        return largest;
    }
};
int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
