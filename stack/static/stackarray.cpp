#include<iostream>
#include<stdexcept>

class Stack{
private:
  static const int MAX_SIZE =3;
  int arr[MAX_SIZE];
  int top;
public:
  Stack(): top(-1){};
  
  //Push the value
  void push(int value){
    if(isFull()){
      std::cout<<"Stack Overflow\n";
      return;
    }
    arr[++top] = value;
  }
  //Pop the value
  void pop(){
    if(isEmpty()){
      std::cout<<"Stack is Underflow\n";
      return ;
    }
    arr[top--];
    return;
  }
  //Peek
  int peek(){
    if(isEmpty()){
      std::cout<<"Stack is Underflow\n";
      return -1;
    }
    return arr[top];
  }
  //Display
  void display(){
    if(isEmpty()){
      std::cout<<"Stack is Underflow\n";
      return ;
    }
    std::cout<<"Stack is ";
    for(int i=0;i<=top;++i){
      std:: cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
  }
  bool isEmpty() const{
    return top == -1;
  }
  bool isFull() const{
    return top == MAX_SIZE - 1; 
  }
};
int main(){
  Stack stack;
  stack.display();
  stack.push(2);
  stack.push(7);
  stack.push(9);
  std::cout<<"peek is "<<stack.peek()<<std::endl;
  stack.display();
  stack.push(7);
  stack.display();

  return 0;
}
