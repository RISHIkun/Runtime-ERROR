#include<iostream>
using namespace std;
int stack[10],front=-1,rear=-1,n=10;
void push(int val)
{
 if (rear==n-1)
 {
     cout<<"Stack overflow"<<endl;
 }
 if (front==-1&&rear==-1)
 {
     front=0;
     rear=0;
      stack[rear]=val;
 }
 else
 {
  rear++;
  stack[rear]=val;
 }
}
void pop()
{
    if (front==-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        cout<<stack[front]<<" is deleted"<<endl;
        front++;

    }
    
}
void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout<<stack[i]<<endl;
    }
    
}
int main()
{
    int a,b;
    while (b!=4)
    {
        cout<<"\n1 push\n2 pop\n3 display\n4 exit"<<endl;
        cin>>b;
        if (b==1)
        {
            cout<<"Enter the element you want to push"<<endl;
            cin>>a;
            push(a);
        }
        if (b==3)
        {
            cout<<"****************************"<<endl;
            display();
            cout<<"****************************"<<endl;
        }
        if (b==2)
        {
            pop();
        }
        
        
        
    }
    

return 0;
}