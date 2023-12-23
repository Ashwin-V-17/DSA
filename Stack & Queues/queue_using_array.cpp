#include<bits/stdc++.h>
using namespace std;
class Queue
{
     int *arr;
    int maxSize,currSize,front,rear;
    public:  
       Queue(int Size)
       {
          arr=new int[Size];
          maxSize=Size;
          front=-1;
          rear=-1;
          currSize=0;
       }
       void push(int ele)
       {
          if(currSize==maxSize)
          {
            cout<<"Queue is Full"<<endl;
            exit(1);
          }
          if(front==-1 && rear==-1)
          {
             front=rear=0;
          }
          else
          {
            rear=(rear+1)%maxSize;
          }
          arr[rear]=ele;
          cout<<"The element Pushed is"<<ele<<endl;
          currSize++;
       }
       int top()
       {
          if(front==-1)
          {
            return -1;
          }
          return arr[front];
       }
       int size()
       {
        return currSize;
       }
       int pop()
       {
          int val;
          if(front==-1 && rear==-1)
          {
            cout<<"Queue is Empty"<<endl;
          }
          else if(front==0 && rear==0)
          {
            val=arr[front];
            front=rear=-1;
          }
          else 
          {
            val=arr[front];
            front=(front+1)%maxSize;
          }
          currSize--;
          return val;
       }
};
int main() {
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}