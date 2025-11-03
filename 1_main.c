//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main (){
int arr[3][3];
int i,j;
    for (i=0;i<3;i++)
{
    scanf ("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
}
    for (i=0;i<3;i++){
    for (j=0;j<3;j++){
    printf ("%d",arr[i][j]);
    if(j < 2) printf (" ");
}
    printf ("\n");
}
    return 0;
}

