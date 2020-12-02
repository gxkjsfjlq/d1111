#include<stdio.h>
void main()
{
int a,b,c,d;
printf("请输入秒数");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=(a%3600)%60;
printf("%d时;%d分;%d秒\n",b,c,d);

}
