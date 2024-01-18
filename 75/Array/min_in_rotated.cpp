/*
Example 1:
Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
Example 2:
Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
Example 3:
Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times
*/
Approach 1:[Linear Search]
class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]<min)
           {
               min=nums[i];
           }
        }
        return min;
    }
};
Approach 2:[Binary Search]
  class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};
