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
