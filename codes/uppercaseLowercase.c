#include <stdio.h>
int main()
{
    //uppercase lowercase or special character
    char c;
    printf("enter an character:");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("it's an uppercase alphabet.");
    }
    else if(c >= 97 && c <= 122)
    {
        printf("a lower case alphabet.");
    }
    else if(c >= 48 && c <= 57)
    {
        printf("its is a number.");
    }
    else
    {
        printf("its is a special character.");
    }
}
