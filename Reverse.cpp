#include<iostream>
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
int main()
{
  
