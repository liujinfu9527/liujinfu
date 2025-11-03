//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int one(int arr[],int length)
{
int result = 0;
    for(int i=0;i<length;i++)
{
    result+= arr[i];}
    return result;
}
int two(int arr[],int length)
{
int answer = 1;
    for(int i = 0;i<length;i++)
{
    answer*= arr[i];
}
    return answer;
}
int main()
{
int arr[5];
    for(int i = 0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
int result = one(arr,5);
int answer = two(arr,5);
    printf ("%d %d\n",result,answer);
    return 0;


}
