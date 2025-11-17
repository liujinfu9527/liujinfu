//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main ()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    for( int i = 0; i < 5; i++)
{
        scanf ("%d",ptr + i);
}
    for(int i = 0; i < 5; i++)
{
      *(ptr + i) *= 2;
}
    for(int i = 0; i < 5; i++)
{
    printf ("%d ",*(ptr + i));
}
    return 0;
}
