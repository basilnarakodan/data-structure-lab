#include<stdio.h>
int top=-1,ar[20];
int push(){
    int val;
    if(top>=19){
        printf("overflow");
    }
    else{
        printf("enter the value: ");
        scanf("%d",&val);
        top=top+1;
        ar[top]=val;
    }
    }
int pop(){
    int val;
    if(top==-1){
        printf("underflow");
    }
    else{
        val=ar[top];
        top=top-1;
        return val;
    }
    }
void display(){
    for(int i=top;i>=0;i--){
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
    default:printf("enter valid no.: ");
        break;
    }
    printf("\nDo U want to continue 0/1 \n");
    scanf("%d", &b);
} while (b != 0);
return 0;
}