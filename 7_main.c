//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main ()
{
    int arr[5];
    int i = 1;
    scanf("%d%d%d%d",&arr[1], &arr[2], &arr[3], &arr[4]);
    arr[0]=0;
    i=0;
    while (i<5)
{
    if (i== 4)
{
    printf("%d", arr[i]);
}   else
{
        printf("%d ", arr[i]);
} 
    i++;
}
    return 0;
}







