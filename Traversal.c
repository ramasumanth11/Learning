#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
};
void traversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node* second;
    struct node* head=NULL;
    struct node* third;
    
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    traversal(head);
    
    
    
    
    
    
    return 0;
}
