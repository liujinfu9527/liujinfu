//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main ()
{
int arr[10];
int i,j;
    for (i = 0;i < 10;i++)
{
    scanf ("%d",&arr[i]);
}
    for (i = 0;i < 9;i++)
{
    for (j = 0;j < 9;j++)
{
    if (arr[j] > arr[j+1])
{
    arr[j] = arr[j] + arr[j+1];
    arr[j+1] = arr[j] - arr[j+1];
    arr[j] = arr[j] - arr[j+1];
}
}
}
    for(i = 0;i < 10;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}
