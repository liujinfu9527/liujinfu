//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
void one (int *ptr_arr, int length)
{
    for (int i = length - 1; i > 0; i --)
{
    *(ptr_arr+i) = *(ptr_arr +i - 1);
}

    ptr_arr[0] = 0;
        
}
    int main ()
{
    int arr[5];
    int length = 5;
    for (int i = 0; i < length; i ++)
{
    scanf ("%d",&arr[i]);
}
    one (arr,length);
    for (int i = 0; i < length; i ++)
{
    printf ("%d ",arr[i]);
}
    return 0;
}
