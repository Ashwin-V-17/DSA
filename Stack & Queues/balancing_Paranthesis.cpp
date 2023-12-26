#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='['|| s[i]=='{'||s[i]=='(')
            {
                st.push(s[i]);
            }
            else 
            {
                if(st.empty()) return false;
                char ch=st.top();
                st.pop();
                if((s[i]==')' && ch=='(')||(s[i]=='}'&& ch=='{')||(s[i]==']'&& ch=='['))
                {
                   continue;
                }
                else 
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
main()
{
    string s="()[{}()]";
    Solution a;
    if(a.isValid(s))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
}