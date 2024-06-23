#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node *head=NULL,*temp,*newnode;
void insert_beg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    
}
void insert_end(){
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=newnode;
    printf("Sucessfull!");
    
    }

void insert_pos(){
    int i,pos,count=0;
    temp=head;
    while (temp!=0)
    {
        temp=temp->next;
        count++;
    }
    printf("Enter the position:");
    scanf("%d",&pos);
    
    if (pos>count+1 || pos<1)
    {
        printf("Invalid position!");
    }
    else if (pos==1)
    {
        insert_beg();
        
    }
    else{
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("Enter the data: ");
         scanf("%d",&newnode->data);
         temp=head;
         for (i = 1; i < pos-1; i++)
         {
            temp=temp->next;
         }
         newnode->next=temp->next;
         temp->next=newnode;
         
    }   
    printf("Sucessfull!");
}


void delete_beg(){
    temp=head;
    head=temp->next;
    free(temp);
    printf("Sucessfully deleted");
}
void delete_end(){
    temp=head;
    while(temp->next->next!=0){
        temp=temp->next;
    }
    temp->next=NULL;
    printf("Sucessfull!");
}
void delete_pos(){
    int i,pos,count=0;
    temp=head;
    while (temp!=0)
    {
        temp=temp->next;
        count++;
    }
    printf("Enter the position:");
    scanf("%d",&pos);
    
    if (pos>count+1 || pos<1)
    {
        printf("Invalid position!");
    }
    else if (pos==1)
    {
        delete_beg();
        
    }
    else{
         temp=head;
         for (i = 1; i < pos-1; i++)
         {
            temp=temp->next;
         }
         temp->next=temp->next->next;
         
    }
    printf("Sucessfull!");
}
void display(){
 
    temp=head;
    while (temp!=0)
    { 
        printf("%d ",temp->data);
        temp=temp->next;
    }    
}

int main(){
    int ch=1;
    printf("Singly Linked list\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    head=newnode;
    while (ch!=0) 
    {
        printf("\nEnter the choice\n1.Insert at beginin\n2.Inssert at position\n3.Insert at position\n4.Delete from beg\n5.Delete from end\n6.Delete from pos\n7.Display\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            delete_beg();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_pos();
            break;
        case 7:
            display();
            break;
        case 8:
            ch=0;
            break;
        default:
            printf("Invalid choice");
            break;
        }
        
    }
    
return 0;

}
