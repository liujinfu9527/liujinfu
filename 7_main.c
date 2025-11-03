//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int one(int arr[],int length){
    for (int i=0, j=length - 1;i<j;i++,j--)
{
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];
}
    
}
int main ()
{
int arr[5];
    for (int i=0;i<5;i++)
{
    scanf ("%d",&arr[i]);
}
    one(arr,5);
    for(int i=0;i<5;i++)
{
    if(i==4)
{
        printf("%d",arr[i]);
}
    else
{
        printf("%d ",arr[i]);
}
}
    return 0;
}





