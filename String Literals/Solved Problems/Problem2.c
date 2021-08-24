#include<stdio.h>
#include<string.h>
int main()
{

    char c[] = "Abarna";
    char *p= c;
    printf("%s",  p + p[3] - p[1]);
}
