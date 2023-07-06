//arrays print

#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,5,6};
	int i;
	a[5]=69;
	for (i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}

	
	return 0;
}
