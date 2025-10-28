//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main() 
{
    int num = 100;
    int first = 1;
    while (num <= 999) 
{
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;
    if (a * a * a + b * b * b + c * c * c == num) 
{
    if (first) 
{
    printf("%d", num);
    first = 0;
}   else 
{
    printf(" %d", num);
}
}
    num++;
}
    return 0;
}
