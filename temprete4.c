#include<stdio.h>
main()
{
	int i,fd,ld,n,sum;
	
	printf("Enter value N = ");
	scanf("%d",&n);
	
	ld=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	
	fd=n;
	sum=fd+ld;
	{
		printf("first & last digit of sum = %d",sum);
	}
	
	
}