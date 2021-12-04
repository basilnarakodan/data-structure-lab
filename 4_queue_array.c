#include<stdio.h>
int ar[20],front=-1;rear=-1;
void push(){
    int val;
    if(rear>=19){
        printf("overflow");
    }
    else if(front==-1 && rear==-1){
        printf("enter the value: ");
        scanf("%d",&val);
        front++;
        rear++;
        ar[rear]=val;
    }
    else if(front<=rear){
        printf("enter the value: ");
        scanf("%d",&val);
        rear++;
        ar[rear]=val;
    }
    }
void pop(){
    int val;
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else if(front<=rear){
        val=ar[front];
        front++;
    }
    else if(front>rear){
        rear=-1;
        front=-1;
    }
    }
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d\n",ar[i]);
    }
}
int main(){
    int n,b;
    do{
    printf("1.push\n2.pop\n3.display: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        push();
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