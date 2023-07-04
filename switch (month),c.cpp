//written a program switch using month

#include<stdio.h>
int main()
{
	int month;
	printf("enter the month");
	scanf("%d\n",month);
	switch(month)
	{
	case 1:
	printf("january");
	break;
	
	case 2:
	printf("februay");
	break;
	
	case 3:
	printf("march");
	break;
	
	case 4:
	printf("april");
	break;
	
	case 5:
	printf("may");
	break;
	
	case 6:
	printf("june");
	break;
	
	case 7:
	printf("july");
	break;
	
	case 8:
	printf("august\n");
	break;
	
	case 9:
	printf("september");
	break;
	
	case 10:
	printf("october");
	break;
	
	case 11:
	printf("november");
	break;
	
	case 12:
	printf("december");
	break;

		
	default:
		printf("enter the number between 1 to 12");
	}
		
	

		return 0;
}
