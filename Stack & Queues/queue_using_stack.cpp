#include<bits/stdc++.h>
using namespace std;
class Queue
{
  public:
  stack<int> s1,s2;
      void Push(int x)
      {
          while(!Empty(s1))
          {
             s2.push(s1.top());
             s1.pop();
          }
          cout<<"The Pushed Element is:"<<x<<endl;
          s1.push(x);
          while(!Empty(s2))
          {
              s1.push(s2.top());
              s2.pop();
          }
      }
      int Pop()
      {
        int val=s1.top();
        s1.pop();
        return val;
      }
      int Top()
      {
        return s1.top();
      }
      bool Empty(stack<int> s)
      {
         if(s.empty())
         {
            return true;
         }
         else 
         {
            return false;
         }
      }
      int Size()
      {
        return s1.size();
      }

};
int main() {
  Queue q;
  q.Push(3);
  q.Push(4);
  cout << "The element poped is " << q.Pop() << endl;
  q.Push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.Size() << endl;
}