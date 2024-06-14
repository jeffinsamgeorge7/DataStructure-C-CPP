#include <iostream>
#include <stdio.h>

using namespace std;
#define max 5
int stack[max];
int top=-1;
int x;
int i;
int  ch;

void push(){
    if(top==max-1){
        cout<<"Stack is full \n";
    }
    else{
        cout<<"Enter the value to push \n";
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==max-1){
        cout<<"Stack is empty \n";
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1){
        cout<<"Stack is empty \n";
    }
    else{
        for(i=top;i>=0;i--){
            cout<<stack[i]<<" ";
            
        }
        cout<<endl;
    }
}
void Isempty(){
    if(top==max-1){
        cout<<"stack is full \n";
    }
    else if(top==-1){
        cout<<"Stack is empty \n";
    }
    else{
        cout<<"Stack is not full";
    }
}
void peekvalue(){
    cout<<stack[top]<<endl;
}

int main(){
     cout<<"Stack Operation using Static method (Array) \n";
   
     cout<<"1.Push 2.Pop 3.Display 4.Is Empty  5.Peek value 0.Exit\n";
   
      do{
          
         cout<<"Enter your choice:  ";
         cin>>ch;
         switch(ch){
        case 1:
             push();
             break;
        case 2:
             pop();
             break;
        case 3:
             display();
             break;
        case 4:
            Isempty();
            break;
        case 5:
             peekvalue();
             break;
        case 0:
            exit(0);
        default:
             cout<<"Invalid option";
    }

      }
      while(ch!=0);
    
     
}
