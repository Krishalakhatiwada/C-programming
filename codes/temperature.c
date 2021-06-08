/* Formula for fahrenheit=((9/5)*Celsius)+32
//we can use 1.8 in place of 9/5 */
#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("enter the celsius:");
    scanf("%f",&celsius);
    printf("temperature in fahrenheit:%f\n",(1.8*celsius)+32);
//for fahrenheit to celsius= (fahrenheit-32)/1.8.

}