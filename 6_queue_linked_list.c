#include<stdio.h>
struct node{
    int data;
    struct node *link;
}*front=NULL,*rear=NULL,*temp=NULL;
void push(){
    int val;
    if(front==NULL && rear==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->link=NULL;
        rear=temp;
        front=temp;
    }
    else{
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->link=NULL;
        rear->link=temp;
        rear=temp;
    }
}
void pop(){
    int val;
    if(front==NULL){
        printf("underflow");
    }
    else{
        val=front->data;
        temp=front;
        front=front->link;
        free(temp);
    }
}
void display(){
    struct node *p=front;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->link;
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
    default:printf("enter a valid option:\n");
        break;
    }
    printf("\nDo U want to continue 0/1 \n");
    scanf("%d", &b);
    } while (b != 0);
return 0;
}