#include<stdio.h>
#include<string.h>
void main()
{

printf("   #####猜数字小游戏#####;)\n");
printf("  请回答，答对才能进入游戏哦（￣︶￣）↗　\n");
printf("  请回答：老乡见老乡，下一句是什么？\n");

while(1)
{

		char x[50];
		char a[]="眼泪两汪汪";

int s=6;
int y;
		scanf("%s",&x);

		if(strcmp(x,a)==0)
		{
		printf("  答对了，真棒！请输入一个数字　  \n");
		}

		else 
		{
		printf("  错了错了━━(￣ー￣*|||━━重来(^人^)  \n");
		printf("  提示：穿越剧里经常出现的哦*^____^*  \n");
		}

scanf("%d",&y);
printf("友情提示：只能输入1—10哦\n");

if(y==6)
{
printf("猜对了，真不错^o^\n");
}

else if(y>6)
{
printf("猜错了，太大了，重猜╯︿╰\n");
}

else
{
printf("猜错了，太小了，重猜╯︿╰\n");
}

}
}
