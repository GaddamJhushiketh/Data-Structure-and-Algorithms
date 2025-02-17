#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfDivisors(int n) {
        int k = 0;

        for (int i = 1; i <= n; ++i) {
            int sum_divisors = 0;
            for (int j = 1; j * j <= i; ++j) {
                if (i % j == 0) {
                    sum_divisors += j;  // Add divisor j
                    if (j != i / j) {
                        sum_divisors += i / j;  // Add the paired divisor i/j
                    }
                }
            }
            k += sum_divisors;  // Add the sum of divisors F(i) to k
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
