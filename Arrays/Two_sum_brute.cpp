#include <iostream>
#include <vector>
using namespace std;
class solution {
     public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i=0;i<nums.size();i++)
                {
                    int y=target-nums[i];
                        for (int j=i+1;j<nums.size();j++)
                        {
                            if(y == nums[j])
                            {
                               return {i,j};
                            }
                        }
                    }
                    return {};
                } 
};

int main() {
    solution sol;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);
    if (!result.empty()) {
        cout << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}