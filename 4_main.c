//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int one(int a,int b)
{
int result = 1;
    for (int i = 0;i<b;i++)
{
    result*= a;
}
    return result;
}
int main()
{
int answer = one(1,2) + one(2,2) + one(3,2) + one(4,2) + one(5,2);
    printf ("%d",answer);
    return 0;
}
