#include<stdio.h>
void main()
{
int x;
printf("\n   打工人工资判断\n");
scanf("%d",&x);
if(x>=0&&x<=100)
{
printf("\n  贫困打工人\n");
}
else if(x>=101&&x<=1000)
{
printf("\n  一般打工人\n");
}
else if(x>=1001&&x<=10000)
{
printf("\n  土豪打工人\n");
}
else
{
printf("\n  输入错误，请重新输入。\n");
}

}
