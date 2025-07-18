/*
415. Add Strings
Easy
Topics
Companies
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
 

Constraints:

1 <= num1.length, num2.length <= 104
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.





#######################################################
OPTIMAL SOLUTION
#######################################################
class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {
            int n1 = i >= 0 ? num1[i--] - '0' : 0;
            int n2 = j >= 0 ? num2[j--] - '0' : 0;

            int sum = n1 + n2 + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string add(string num1, string num2){
        string ans;
        int a = num1.size() - 1, b = num2.size() - 1, carry = 0;
        while(b >= 0){
            int sum = (num1[a] - '0') + (num2[b] - '0') + carry;
            carry = sum / 10;
            char c = '0' + (sum % 10);
            ans.insert(ans.begin(), c);
            a--;
            b--;
        }
        while(a >= 0){
            int sum = (num1[a] - '0') + carry;
            carry = sum / 10;
            char c = '0' + (sum % 10);
            ans.insert(ans.begin(), c);
            a--;
        }
        if(carry > 0){
            ans.insert(ans.begin(), carry + '0');
        }
        
        return ans;
    }
    string addStrings(string num1, string num2) {
        
        if(num1.size() < num2.size())
            return add(num2,num1);
        else
            return add(num1,num2);
    }
};


int main(){
    string n1, n2;
    cout << "Enter string 1: "; cin >> n1; 
    cout << "\nEnter string 2: "; cin >> n2;
    Solution obj;
    cout << "Result: " << obj.addStrings(n1, n2) << endl;
    return 0;
}










