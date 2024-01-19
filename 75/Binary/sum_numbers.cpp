/*
Given two integers a and b, return the sum of the two integers without using the operators + and -.
Example 1:
Input: a = 1, b = 2
Output: 3
Example 2:
Input: a = 2, b = 3
Output: 5
*/
class Solution {
public:
    int getSum(int a, int b) {
       int sum,carry;
       while(carry!=0)
       {
           sum=a^b;//XOR Operation between a and b
           carry=(a&b)<<1;//AND and Operation between a and b and left shifting the answer.
           a=sum;
           b=carry;
       }
       return sum;       
    }
};
