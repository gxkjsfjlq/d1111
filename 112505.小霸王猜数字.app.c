#include<stdio.h>
#include<windows.h>
void main()
{
while(1)
{
int x=6;
int y;
printf("友情提示：只能输入1—10哦\n");
scanf("%d",&y);
if(y==6)
{
printf("猜对了，真不错\n");
}
else if(y>6)
{
printf("猜错了，太大了，重猜\n");
}
else
{
printf("猜错了，太小了，重猜\n");
}
}
}
