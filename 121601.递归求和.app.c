#include<stdio.h>
int y(int a)
{
	if(a<=0)
	{
	return 0;
	}
	return a+y(a-1);
}
void main()
{
int x;
printf("欢迎使用递归求和小程序\n");
printf("请输入一个数字\n");
scanf("%d",&x);
printf("%d\n",y(x));
}
