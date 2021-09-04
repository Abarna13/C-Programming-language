/*

Assume that objects of type short,float and long occupy 2 bytes, 4 bytes, 8 bytes respectively. The memory requirement for variable t, ignoring alignment consideration is?


*/



struct
{
    short s[5]; //5 array * 2 shorts = 10
    union
    {
        float y;  //float-> 4 bytes its small
        long z; //long-> 8 bytes its large
    }u;
}t;  // so t = 10 + 8 = 18

/*
Output:

18 bytes

*/


