#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfDivisors(int n) {
        int i, j, z, k = 0;
        
        for (i = 1; i <= n; ++i) {
            z = 0;  // Reset z to 0 for each iteration of i
            for (j = 1; j <= i; ++j) {
                if (i % j == 0) {  // Check if j is a divisor of i
                    z += j;  // Sum divisors of i
                }
            }
            k += z;  // Add the sum of divisors F(i) to k
        }
        
        return k;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;  // Input the value of n
    cout << sol.sumOfDivisors(n) << endl;  // Output the result
    return 0;
}
