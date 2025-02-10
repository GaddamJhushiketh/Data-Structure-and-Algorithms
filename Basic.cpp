/* A digit of n divides n evenly if the remainder when n is divides by d is 0 (n%d==0)
Digites of n should be checked individually if a digite is 0,it should be ignored because division by 0
is undefined */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int count=0;
    int original = num;
    while (num > 0) 
    {
        int digit = num % 10;
        num /= 10;
        if (digit != 0 && original % digit == 0) {
            cout << digit << " divides " << original << " leaving the remainder 0" << endl;
        }
        count++;
    }
    cout<<"Number of digites: "<<count;
    return 0;
}
