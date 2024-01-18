/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6. 
*/
APPROACH 1:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n=nums.size();
     int maxi=INT_MIN;
     for(int i=0;i<n;i++)
     {
         int sum=0;
         for(int j=i;j<n;j++)
         {
             sum=sum+nums[j];
             maxi=max(sum,maxi);
         }
     }
     return maxi;
    }    
};
APPROACH 2:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int maxi=INT_MIN;
     int sum=0;
     for(int i=0;i<nums.size();i++)
     {
         sum=sum+nums[i];
         if(sum>maxi)
         {
             maxi=sum;
         }
         if(sum<0)
         {
             sum=0;
         }
     }
     return maxi;
    }  
};
