/*
 Example 1:
 Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.
Example 2:
Input: n = 00000000000000000000000010000000
Output: 1
Explanation: The input binary string 00000000000000000000000010000000 has a total of one '1' bit.
Example 3:
Input: n = 11111111111111111111111111111101
Output: 31
Explanation: The input binary string 11111111111111111111111111111101 has a total of thirty one '1' bits.
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
     int cnt=0;
     while(n!=0)
     {
        /*We are going to do AND operation btw 1 and the given number and check if it is equal to 1*/  
         if((n&1)==1)
         {
             cnt++;
         }
         n=n>>1;
     }
     return cnt;
    }
};
