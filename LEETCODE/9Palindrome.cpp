/*9.Given an integer x, return true if x is a palindrome, and false otherwise.
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/
#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int temp = x;
    long rev = 0;
    while (x != 0)
    {
        long digit = x % 10;
        rev = (rev * 10) + digit;
        x = x / 10;
    }
    if (temp == rev)
    {
        return true;
    }
    return false;
}
int main()
{
    int x;
    cout << "enter a number:" << endl;
    cin >> x;
    bool found = isPalindrome(x);
    if (found == true)
    {
        cout << "is Palindrome" << endl;
    }
    else
    {
        cout << "is not Palindrome";
    }
}