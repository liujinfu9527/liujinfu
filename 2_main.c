//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main(){
    int score;
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score < 90) {
        printf("B\n");
    } else if (score >= 70 && score < 80) {
        printf("C\n");
    } else if (score >= 60 && score < 70) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    } else {
        printf("输入的成绩无效，请输入0到100之间的数字!\n");
    }
    
    return 0;
}
