#include <stdio.h> 
#include <stdlib.h> 
main(void)
{
	int year;
	printf("請輸入年分:");
	scanf("%d",&year );
	if((year%4==0 and year%100!=0) or (year%400==0 and year&3200!=0))
	printf("閏年");
	else
	printf("非閏年");
}
