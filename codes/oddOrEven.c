#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("'%d",&num);
    if(num%2)
{
    printf("the number is even ");  
}
else if(!(num%2))
{
    printf("the number is odd");
}
}