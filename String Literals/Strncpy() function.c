
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[8] = "Aparna";
    char str2[5];


    strncpy(str2,str1, sizeof(str2));
    str2[sizeof(str2)-1] = '\0';
    printf("%s\n ", str2);


}

