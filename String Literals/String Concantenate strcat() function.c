#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    strcpy(str1,"Welcome to");
    strcpy(str2, " Neso academy");
    strcat(str1, str2);
    printf("%s", str1);

}
