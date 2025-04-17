#include<iostream>

class Array{
  private:
    int arr[100];
    int size;
  public:
    Array(){
      size = 0;
    }

    void display(){
      if(size == 0){
        std::cout<<"\033[31m Array is Empty.\033[0m \n";
      }
      else{
        for(int i=0;i<size;i++){
          std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
      }
    }

    void insertbeg(int val){
      if(size>=100){
        std::cout<<"\033[31m Array overflow! \033[0m \n";
      }
      else{
        for(int i = size;i>0;i--){
          arr[i] = arr[i-1];
        }
        arr[0] = val;
        size++;
        std::cout<<"\033[32m Array inserted Successfull! \033[0m \n";
      }
    }
    void insertend(int val){
      if(size >= 100){
        std::cout<<"Array overflow!";
      }
      else{
        arr[size++] = val;
        std::cout<<"\033[32m Array inserted Successfull! \033[0m \n";
      }
    }

    void insertpos(int pos, int val){
      if(pos < 0 || pos > size || pos >= 100){
        std::cout<<"Invalid Position or Array overflow\n";
      }
      else{
        for(int i=size;i>pos-1;i--){
          arr[i]=arr[i-1];
        }
        arr[pos]= val;
        size++;
        std::cout<<"\033[32m Array inserted Successfull!\033[0m \n";
      }
    }

    void deletebeg(){
      if(size == 0){
        std::cout<<"Array is underflow!\n";
      }
      else{
        for(int i=0;i<size-1;++i){
          arr[i]=arr[i+1];
        }
        size--;
        std::cout<<"Deleted Successfully!\n";
      }
    }

    void deleteend(){
      if(size == 0){
        std::cout<<"Array is underflow\n";
      }
      else{
        size--;
        std::cout<<"Deleted Successfull!\n";
      }
    }
    void deletepos(int pos){
      if(pos < 0 || pos >= size){
        std::cout<<"Invalid postition\n";
      }
      else{
        for(int i=pos;i<size-1;++i){
            arr[i]=arr[i+1];
        }
        size--;
        std::cout<<"Deleted Sucessfull\n";
      }
    }
};

int main(){
  int ch,val,pos;
  Array obj;
  while(ch!=0){
    std::cout<<"\033[33m Enter the Choice\n1.Display\n2.Insert at begining\n3.Insert at End\n4.Insert at Position\n";
    std::cout<<"5.Deleted from beg\n6.Delete from end\n7.Delete fromm position\n \033[0m";
    std::cin>>ch;
    switch(ch){
      case 1:
        obj.display();
        break;
      case 2:
        std::cout<<"Insert Element:";
        std::cin>>val;
        obj.insertbeg(val);
        break;
      case 3:
        std::cout<<"Insert Element:";
        std::cin>>val;
        obj.insertend(val);
        break;
      case 4:
        std::cout<<"Enter the position:";
        std::cin>>pos;
        std::cout<<"Enter the element:";
        std::cin>>val;
        obj.insertpos(pos,val);
        break;
      case 5:
        obj.deletebeg();
        break;
      case 6:
        obj.deleteend();
        break;
      case 7:
        std::cout<<"Insert position:";
        std::cin>>pos;
        obj.deletepos(pos);
      case 0:
        std::cout<<"Existing program\n";
      default:
        std::cout<<"Invalid choice!";
    }
  }
}
