#include<stdio.h>
struct node{
    int data;
    struct node *link;
    }*temp=NULL;
void push(){
    int val;
    struct node *top;
    printf("enter the value: ");
    scanf("%d",&val);
    top=(struct node*)malloc(sizeof(struct node));
    top->data=val;    //temp represents top actually
    top->link=temp;
    temp=top; 
}
void pop(){
    int val;
    struct node *top;
    if(temp==NULL){
        printf("stack underflow");
    }
    else{
        val=temp->data;
        top=temp;
        temp=temp->link;
        free(top);
        printf("%d deleted\ncurrent stack : ",val);
        display();
    }
}
void display(){
    struct node *top;
    if(temp==NULL){
        printf("stack is empty");
    }
    else{
        top=temp;
        while(top!=NULL){
            printf("%d\t",top->data);
            top=top->link;
        }
    }
}
int main(){
    int n,a,val;
    do{
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("no. of elements: ");
        scanf("%d",&a);
        for(int i=0;i<a;i++){
        push();
    }
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    default:printf("enter valid no.!");
        break;
    }
} while (n != 4);
return 0;
}