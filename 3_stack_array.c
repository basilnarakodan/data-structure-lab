#include<stdio.h>
#define max 20
int top=-1,ar[max];
int push(){
    int val;
    if(top>=max-1){
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
        printf("%d deleted\ncureent stack : ",val);
        display();
    }
    }
void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
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
    default:printf("enter valid no.: ");
        break;
    }
} while (n != 4);
return 0;
}