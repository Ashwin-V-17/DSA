/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.
Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
Approach 1:[Time Limit Exceeded Problem]
  class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int product=1;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    product=product*nums[j];
                }
            }
            ans.push_back(product);
        }
        return ans;
    }
};
Approach 2:[
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       vector<int> result(n,1);
       int prefix=1;
       for(int i=0;i<n;i++)
       {
           result[i]=prefix;
           prefix=prefix*nums[i];
       }
       int postfix=1;
       for(int j=n-1;j>=0;j--)
       {
           result[j]=result[j]*postfix;
           postfix=postfix*nums[j];
       }
       return result;
    }
};
