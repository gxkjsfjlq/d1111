#include<stdio.h>
int main()
{
int x;
printf("【打工人工资等级划分】\n");
scanf("%d\n",&x);
if(x<-1)
{
printf("你还有花呗没还，无法使用该程序。\n");
}
else if(x>=0&&x<=500)
{
printf("赤贫\n");
}
else if(x>=501&&x<=1500)
{
printf("贫困\n");
}
else if(x>=1501&&x<=3000)
{
printf("普通打工人。\n");
}
else if(x>=3001&&x<=5000)
{
printf("普通清洁工。\n");
}
else if(x>=5001&&x<=12000)
{
printf("水电工工资\n");
}
else if(x>=12000&&x<=50000)
{
printf("脑袋大脖子粗不是老板就是阔富\n");
}
else
{
printf("程序员。\n");
}
