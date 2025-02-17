#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int num) {
        if (num < 0) {
            return false;
        }
        int original = num;
        long int  reverse = 0;
        int reminder;
        while (num != 0) {
            reminder = num % 10;
            reverse = reverse * 10 + reminder;
            num /= 10;
        }
        return original == reverse;
    }
};