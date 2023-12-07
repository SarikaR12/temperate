#include<stdio.h>
main()
{
	int i=2,n,prime=0;
	
	printf("Enter Value N =");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%1==0)
		{
			prime++;
		}
		i++;
	}
	if(prime==0)
	{
		printf("This Is Prime Num");
	}
	else{
		 printf("This Is Not Prime Num");
	}
}