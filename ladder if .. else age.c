#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	
	if(num>25)
	{
		printf("adult\n");
	}
	else if(num<20)
	{
		printf("child\n");
	}
	else
	{
		printf("younger\n");
	}
	return 0;
}
