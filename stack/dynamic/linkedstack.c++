#include<iostream>

class Node{
  public:
    int data;
    Node* next;
    Node (int value):data(value),next(nullptr){}
};
class LinkedStack{
private:
  Node* top;
  int size;
public:

  LinkedStack():top(nullptr),size(0){};

  void push(int value){
    Node* newNode = new Node(value);  
    newNode->next = top;
    top = newNode;
    size++;
    std::cout<<"Pushed element"<<value<<std::endl;
  }
  int pop(){
    if(isEmpty()){
      std::cout<<"Stack is Underflow\n";
    }
    Node* temp=top;
    int value=temp->data;
    top=top->next;
    delete temp;
    size--;
    return value;
  }

  bool isEmpty() const{
    return top == nullptr;
  }
  int getSize() const{
    return size;
  }
  int peek(){
    if(isEmpty()){
      std::cout<<"Stack is Underflow\n";
    }
      return top->data;
  }
  void display(){
    if(isEmpty()){
      std::cout<<"stack is underflow\n";
    }
    Node* current = top;
    while(current){
      std::cout<<current->data<<"->";
      current=current->next;
    }
    std::cout<<"nullptr\n";
  }
};
int main(){
  LinkedStack lstack;
  lstack.push(3);
  lstack.push(7);
  lstack.display();
  std::cout<<"Peek element is"<<lstack.peek()<<std::endl;
  lstack.push(5);
  lstack.push(2);
  std::cout<<"Peek element is"<<lstack.peek()<<std::endl;
  lstack.display();
  lstack.pop();
  lstack.display();
  return 0;
}
