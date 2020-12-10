#include<stdio.h>
#include<string.h>
void main()
{
printf("   吃货的日程总是被安排的明明白白ヽ(￣ω￣(￣ω￣〃)ゝ请问现在是什么节;)\n");
while(1)
{
char x[50];
char a[]="春节";
char b[]="端午节";
char c[]="中秋节";
char d[]="元宵节";
scanf("%s",&x);
if(strcmp(x,a)==0)
{
printf("  给我安排饺子（￣︶￣）↗　  \n");
}
else if(strcmp(x,b)==0)
{
printf("  给我安排粽子[]~(￣▽￣)~*  \n");
}
else if(strcmp(x,c)==0)
{
printf("  给我安排月饼φ(*￣0￣)     \n");
}
else if(strcmp(x,c)==0)
{
printf("  给我安排月饼q(≧▽≦q)    \n");
}
else 
{
printf("  错了错了━━(￣ー￣*|||━━重来(^人^)  \n");
}
}
}
