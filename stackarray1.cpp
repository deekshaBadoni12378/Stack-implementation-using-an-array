#include <iostream>
using namespace std;
int stack[50], n=50, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<" Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<" Underflow"<<endl;
   else {
      cout<<" popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
      } else
   cout<<"empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"your choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<" value should pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
             break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Not found"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
