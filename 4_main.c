//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main() {
   int a,b,c;
   printf("请输入三角形的三边长，以逗号分隔：");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("可以构成三角形\n");
    }else{
        printf("不可以构成三角形\n");
    }
        return 0;
}
