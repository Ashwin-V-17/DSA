#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
  int countStudent(vector<int>& arr,int p)
  {
    int student=1,pageStudent=0;
    for(int i=0;i<arr.size();i++)
    {
        if(pageStudent+arr[i]<=p)
        {
            pageStudent+=arr[i];
        }
        else 
        {
            student++;
            pageStudent=arr[i];
        }
    }
    return student;
  }
   int findPages(vector<int>& arr,int n,int m)
   {
      if(m>n)
      {
        return -1;
      }
      int low=*max_element(arr.begin(),arr.end());//Finding maximum element in the array
      int high=accumulate(arr.begin(),arr.end(),0);//Finding the summation of the array
      while(low<=high)
      {
        int mid=(low+high)/2;
        int scount=countStudent(arr,mid);
        if(scount>m)
        {
            low=mid+1;
        }
        else 
        {
            high=mid-1;
        }
      }
      return low;
   }
};
    
int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    Solution s;
    int ans = s.findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}