//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main () 
{
    int first =1 ;
    for (int i = 100; i<= 999; i++) 
{
    int a=i / 100;
    int b=(i /10) % 10;
    int c=i % 10;
    if (a*a*a + b*b*b + c*c*c == i)
{
    if (first)
{
    printf("%d", i);
    first =0;
}      else
{
    printf(" %d", i);
}
}
}
    return 0;
}
