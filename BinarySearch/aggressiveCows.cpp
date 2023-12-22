#include<bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    int aggressiveCows(vector<int>& stalls,int k)
    {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=0,high=stalls[n-1]-stalls[0];
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(countCows(stalls,mid,k)==true)
            {
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }
        return high;
    }
    bool countCows(vector<int>& stalls,int dist,int cows)
    {
        int cnt=1;
        int n=stalls.size();
        int last=stalls[0];
        for(int i=1;i<n;i++)
        {
            if(stalls[i]-last>=dist)
            {
                cnt++;
                last=stalls[i];
            }
            if(cnt>=cows) return true;
        }
        return false;
    }
};
int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    Solution s;
    int ans = s.aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}