#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int num) {
        if (num < 0 || (num % 10 == 0 && num != 0)) {
            return false;  // Negative numbers and multiples of 10 (except 0) can't be palindromes
        }

        int reversedHalf = 0;
        while (num > reversedHalf) {
            reversedHalf = reversedHalf * 10 + num % 10;
            num /= 10;
        }

        return num == reversedHalf || num == reversedHalf / 10;
    }
};
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // Creating an object of Solution class and calling the isPalindrome method
    Solution solution;
    bool ret = solution.isPalindrome(num);

    if(ret) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
