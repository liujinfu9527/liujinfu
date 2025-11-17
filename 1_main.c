//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main ()
{
    int a;
    scanf ("%d",a);
    int *ptr = &a;
    *ptr += 10;
    printf ("%d,%d" ,a,*ptr);
    return 0;
}
