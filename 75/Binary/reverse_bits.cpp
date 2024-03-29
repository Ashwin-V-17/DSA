/*
Example 1:
Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.
Example 2:
Input: n = 11111111111111111111111111111101
Output:   3221225471 (10111111111111111111111111111111)
Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.
*/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res=0;
        for(int i=1;i<=32;i++)
        {
            res=res+(n&1);
            n=n>>1;
            if(i<=31)
            {
                res=res << 1;
            }
        }
        return res;
    }
};
