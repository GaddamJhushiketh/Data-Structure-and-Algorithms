#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueSet(nums.begin(), nums.end()); 
        nums.assign(uniqueSet.begin(), uniqueSet.end());
        return nums.size();
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " sorted numbers (with duplicates allowed): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int newLength = sol.removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    cout << "Modified sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
