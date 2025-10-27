//202510302201
//2151641135@qq.com
//刘金富
#include <stdio.h>
int main () 
{
   int n;
   scanf("%d", &n);
   int is_prime=1;
   if(n >=50)
   return 0;
   if(n==1){
    is_prime=0;
}  else    {
   
   for (int i = 2;i <n;i++){
   if(n % i == 0){
   is_prime = 0;
   break;
}
}
}
    if (is_prime){
        printf("密钥安全，密码设置成功\n");
}else      {
        printf("密钥不安全，请重新输入\n");
}
     return 0;   
}
    
    
