//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
void swap (int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
    int c,d;
    scanf ("%d %d",&c,&d);
    swap(&c,&d);
    printf ("%d %d",c,d);
    return 0;
    
}
