#include<stdio.h>
#define max 20
int ar[max],front=-1;rear=-1;
void push(){
    int val;
    printf("enter the value: ");
    scanf("%d",&val);
    if(rear>=max-1){
        printf("overflow\n");
    }
    if(front==-1 && rear==-1){
        front++;
        rear++;
        ar[rear]=val;
    }
    else if(front<=rear){
        rear++;
        ar[rear]=val;
    }
    }
void pop(){
    int val;
    if(front==-1 && rear==-1){
        printf("underflow\n");
    }
    else if(front<=rear){
        val=ar[front];
        front++;
        printf("%d deleted\ncurrent queue : ",val);
        display();
    }
    else if(front>rear){
        rear=-1;
        front=-1;
    }
    }
void display(){
    if(front==-1){
        printf("Queue is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d\t",ar[i]);
        }    
    }   
}
int main(){
    int n,a;
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
    default:printf("enter a valid option:\n");
        break;
    }
    } while (n != 4);
return 0;
}