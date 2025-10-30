//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main () 
{
    int arr[5];
    int i=0;
    while (i<5)
{
    int num;
    scanf("%d", &num);
    if (num%2==0)
{
    arr[i]=num;
    i++;
}
}
    i=0;
    while (i<5)
{
    if (i== 4)
    printf("%d", arr[i]);
    else
    printf("%d ", arr[i]);
    i++;
}
    return 0;
}
