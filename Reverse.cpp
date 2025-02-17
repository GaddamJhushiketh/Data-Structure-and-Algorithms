
#include<iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long int reversed = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            reversed = reversed * 10 + digit;
            if (reversed > INT_MAX || reversed < INT_MIN) {
                return 0;
            }
        }
        return static_cast<int>(reversed);
    }
};
int main() {
    Solution solution;
    int x1;
    cin>>x1;
    std::cout << "Reversed of " << x1 << " is: " << solution.reverse(x1) << std::endl;

    return 0;
}
