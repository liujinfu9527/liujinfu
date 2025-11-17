//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
void one (int *arr ,int length)
{
    for (int i = 0; i <length; i ++)
{
        arr[i] += 1;

}
}
int main ()
{
    int arr[5];
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < length; i ++）
{
        scanf ("%d",&arr[i]);
}
    one (arr,length);
    for (int i = 0; i < 5; i ++)
{
        printf ("%d ",arr[i]);
}
    return 0;
}
