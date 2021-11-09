#include<stdio.h>

void insert(int *a,int l){
int n,pos,i;
printf("enter position and value to insert\n");
scanf("%d%d",&pos,&n);
for(i=l-1;i>=pos-1;i--){
*(a+i+1)=*(a+i);
}
*(a+pos-1)=n;
printf("inserted\n");
for(i=0;i<l;i++){
printf(" %d ",*(a+i));
}}

void delete(int *a,int l){
int n,pos,i;
printf("enter position\n");
scanf("%d",&pos);
n=*(a+pos-1);
for(i=pos-1;i<l;i++){
*(a+i)=*(a+i+1);
}
printf("deleted\n");
for(i=0;i<l;i++){
printf(" %d ",*(a+i));
}}

void display(int *a,int l){
int i;
for(i=0;i<l;i++){
printf(" %d ",*(a+i));
}}

void search(int *a,int l){
int i,n;
printf("search value\n");
scanf("%d",&n);
for(i=0;i<l;i++){
if(*(a+i)==n){
printf("found at %d position",i+1);
}}}

void main(){
int ar[25],b,l,*p,rep,arsize,i;
printf("enter size of array:\t");
scanf("%d",&arsize);
printf("enter array elements:\t");
for(i=0;i<arsize;i++){
scanf("%d",&ar[i]);
}
printf("you entered");
for(i=0;i<arsize;i++){
printf(" %d ",ar[i]);
}
do{
printf("\n1.insert\n2.delete\n3.view\n4.search\n");
scanf("%d",&b);
l=sizeof(ar)/sizeof(int);
p=ar;
if(b==1){
insert(ar,arsize);
}
if(b==3){
display(ar,arsize);
}
if(b==2){
delete(ar,arsize);
}
if(b==4){
search(ar,arsize);
}
printf("\ndo u want to continue 1/0:\t");
scanf("%d",&rep);
}while(rep==1);
}
