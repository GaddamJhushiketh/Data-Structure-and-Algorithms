#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfDivisors(int n) {
        int k = 0;

        for (int i = 1; i <= n; ++i) {
            int z = 0;
            for (int j = 1; j * j <= i; ++j) {
                if (i % j == 0) {
                    z += j;  // Add divisor j
                    if (j != i / j) {
                        z += i / j;  // Add the paired divisor i/j
                    }
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
