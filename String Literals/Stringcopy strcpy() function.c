

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Aparna Pandian";
    char str2[20];
    char str3[20];


    strcpy(str3, strcpy(str2,str1));
    printf("%s %s", str3, str2);

}
