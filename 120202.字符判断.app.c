
#include<stdio.h>
void main()
{
char x;
printf("#######欢迎使用本程序#######\n");
scanf("%c",&x);
switch(x)
{
  case 'w':printf("  这是上键\n");break;
  case 's':printf("  这是下键\n");break;
  case 'a':printf("  这是左键\n");break;
  case 'd':printf("  这是右键\n");break;
default:printf("请输入a,s,d,w中的一个");
}
}
