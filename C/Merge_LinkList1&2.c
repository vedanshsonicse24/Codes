#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main(){
    
    struct Node *stnode=NULL, *fnnode=NULL, *temp=NULL, *head=NULL;
    
    int n,num;

    printf("Enter First No. of Node\n");
    scanf("%d",&n);

    stnode = (struct Node*)malloc(sizeof(struct Node));
    if(stnode == NULL){
        printf("Memory allocation is fail");
    }

    printf("Enter Data:\t");
    scanf("%d",&num);
    stnode->data = num;
    stnode->next = NULL;
    temp = stnode;

    //Create a remaining Node
        for(int i=2; i<=n; i++){
            printf("Enter Data:\t");
            scanf("%d",&num);
            fnnode = (struct Node*)malloc(sizeof(struct Node));
            fnnode->data = num;
            fnnode->next = NULL;
            temp->next = fnnode;
            temp = fnnode;
          }
   temp = stnode;
    while(temp!=NULL){
        printf("|%d|-",temp->data);
        temp = temp->next;
    }        printf("\n");

   //-----<>
    
   printf("Enter Second No. of Node\n");
    scanf("%d",&n);

   head = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL){
        printf("Memory allocation is fail");
    }

    printf("Enter Data:\t");
    scanf("%d",&num);
    head->data = num;
    head->next = NULL;
    temp = head;
//Create a remaining Node of Linklist2
        for(int i=2; i<=n; i++){
            printf("Enter Data:\t");
            scanf("%d",&num);
            fnnode = (struct Node*)malloc(sizeof(struct Node));
            fnnode->data = num;
            fnnode->next = NULL;
            temp->next = fnnode;
            temp = fnnode;
          }
   temp = head;
    while(temp!=NULL){
        printf("|%d|-",temp->data);
        temp = temp->next;
    }
      temp = stnode;
while(temp!=NULL){
printf("|%d|-",temp->data);
 temp= temp->next;
}  printf("x\nThe Merging of LinkList_1 & LinkList_2");
    return 0;
}