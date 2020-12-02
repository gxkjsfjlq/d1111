#include<stdio.h>
void main()
{
int a;
printf("请输入秒数\n");
scanf("%d",&a);
printf("%.2d\n",a/3600);
printf("%.2d\n",(a%3600)/60);
printf("%.2d\n",(a%3600)%60);


}
