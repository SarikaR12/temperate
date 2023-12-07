#include<stdio.h>
main()
{
	int i,n,count;
	printf("Enter value N =");
	scanf("%d",&n);
	
	for(i=1, count=0; n!=0; count++)
	{
		n=n/10;
	}	
	printf("Count num of Digit= %d",count);
}