#include<stdio.h>
struct node{
    int data;
    struct node *link;
    }*top=NULL,*temp=NULL;
void push(int val){
    if(top==NULL){
        top=(struct node*)malloc(sizeof(struct node));
        top->data=val;
        top->link=NULL;
        temp=top;
    }
    else{
        top=(struct node*)malloc(sizeof(struct node));
        top->data=val;
        top->link=temp;
        temp=top;
    }
}
void pop(){
    int val;
    if(temp==NULL){
        printf("underflow");
    }
    else{
        val=temp->data;
        top=temp;
        temp=temp->link;
        free(top);
    }
}
void display(){
    top=temp;
    while(top!=NULL){
        printf("%d\t",top->data);
        top=top->link;
    }
}
int main(){
    int n,b,val;
    do{
    printf("1.push\n2.pop\n3.display: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("enter the value: ");
        scanf("%d",&val);
        push(val);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default:printf("enter valid no.: ");
        break;
    }
    printf("\nDo U want to continue 0/1 \n");
    scanf("%d", &b);
} while (b != 0);
return 0;
}