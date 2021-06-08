#include<stdio.h>
int main(){
    /*character a vowel or consonant*/
char c;
int uppercase_vowel,lowercase_vowel;
printf("enter an alphabet:");
scanf("%c", &c);
//identify if the given alphabet is uppercase or lowercase
lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowercase_vowel||uppercase_vowel)
printf("%c is a vowel.",c);
 else
printf("%c is a consonant:",c);

}


