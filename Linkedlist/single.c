#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;
int ch=1,i,pos,count;

int  insertbeg(){
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    // newnode->next=head;
    // head=newnode;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    

    return 0;
}
int insertend(){
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        while(temp->next!=NULL){
        temp=temp->next;
        }
         temp->next=newnode;
    }
    

    return 0;
}




int insertpos(){
    int count=0;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        count++;
        temp=temp->next;
    }
    printf("%d\n",count);
    printf("Enter the postion: ");
    scanf("%d",&pos);
   
    if(pos>count +1 || pos<1 ){
        printf("Invalid postition!");
    }
    if(pos==1){
        insertbeg();
        return 0;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    for(i=1;i<pos-1;i++){
        temp=temp->next;
    }
        // printf("%d",temp->data);
    newnode->next=temp->next;
    temp->next=newnode;
    
    return 0;
    
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    
}

int main(){
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("SIngly Linked list\n");
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next =NULL;
    if(head==NULL){
         head=newnode;
         printf("Sucessfull\n");
    }
    while(ch!=0){
        printf("\nChoose option\n 1.Insert at front\n 2.Insert at end\n 3.INsertat position \n 4.display \n");
        scanf("%d",&ch);
    
        switch(ch){

       
        case 1:
            insertbeg();
            break;
        case 2:
             insertend();
             break;
        case 3:
             insertpos();
             break;

        case 4:
             display();
             break;
        default: printf("Invalid");

    }
    }
   
    return 0;
}
