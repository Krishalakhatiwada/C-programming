#include<stdio.h>
int main(){
    //swap two numbers without third variable
int x,y;
printf("enter two numbers:");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("after swap x=%d and y=%d",x,y);


}