
#include <stdio.h>

void main()

{
    static int x = 3;
    x++;
    if (x <= 5)
    {
        printf(“hello ”);
        main();

    }

}

/*
Output :
hello hello
*/

