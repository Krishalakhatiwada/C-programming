#include<stdio.h>
int main(){
    char c;
     printf("enter an alphabet:");
    scanf("%c",&c);
    //identify if entered character is alphabet or not
if((c>='a'&&c<='z'|| c>='A'&&c<='Z'))
 printf("%c is an alphabet",c);
 else  
 printf("%c is not an alphabet",c);
}