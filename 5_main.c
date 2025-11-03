//202510302201
//2151641135@qq.com
//刘金富
include <stdio.h>
int one(int a1 ,int an,int step)
{
    int result = 1;
    int n = (an-a1) / step + 1;
    result = (a1+an) * n / 2;
    return result;
}
int main ()
{
int answer = one (1,100,1);
    printf("%d",answer);
    return 0;
}
