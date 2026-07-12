#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main(){
    
    struct Node *stnode=NULL, *fnnode=NULL, *temp=NULL;
    int n,num;

    printf("Enter No. of Node ");
    scanf("%d",&n);

    stnode = (struct Node*)malloc(sizeof(struct Node));
    if(stnode == NULL){
        printf("Memory allocation is fail");
    }

    printf("Enter Data :\n");
    scanf("%d",&num);
    stnode->data = num;
    stnode->next = NULL;
    temp = stnode;

    //Create a remaining Node
        for(int i=2; i<=n; i++){
            printf("Enter Data :\n");
            scanf("%d",&num);
            fnnode = (struct Node*)malloc(sizeof(struct Node));
            fnnode->data = num;
            fnnode->next = NULL;
            temp->next = fnnode;
            temp = fnnode;
          }
   temp = stnode;
    while(temp!=NULL){
        printf("%d|-",temp->data);
        temp = temp->next;
    }
    return 0;
}