#include<stdio.h>
#include<windows.h>
void main()
{
int i;
for(i=0;i<=1024;i++)
{
if(i%2!=0)
printf("%d\n",i);
Sleep(300);
}
}
