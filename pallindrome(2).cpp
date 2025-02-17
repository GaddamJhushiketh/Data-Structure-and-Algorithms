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
