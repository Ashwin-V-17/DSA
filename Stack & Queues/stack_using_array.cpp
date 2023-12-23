#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int *arr;
    int top;
    int size;
   public:
      Stack()
      {
        top=-1;
        size=100;
        arr=new int[size];
      }
      void push(int val)
      {
         if(!isFull())
         {
            top++;
            arr[top]=val;
         }
      }
      int pop()
      {
        if(!isEmpty())
        {
            int x=arr[top];
            top--;
            return x;
        }
        return -1;
      }
      int Size()
      {
        return top+1;
      }
      int isFull()
      {
        if(top==size-1)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
      }
      int isEmpty()
      {
        if(top==-1)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
      }
      int Top()
      {
        return arr[top];
      }
     

};
main()
{
  Stack s;
  s.push(6);
  s.push(3);
  s.push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}