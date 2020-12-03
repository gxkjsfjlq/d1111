#include<stdio.h>#include<stdio.h>
void main()
{
int a,b;
int x[]={2,4,6,8,10};
int y[3][4]={
    {1,3,5,7},
    {9,11,13,15,},
	{17,19,21,23}
			};

for(a=0;a<3;a++)
{
	for(b=0;b<3;b++)
	{
		printf("%d ",y[a][b]);
		}
			printf("\n",y[a][b]);	

				}



}

