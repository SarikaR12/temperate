#include<stdio.h>
main()
{
	int i,s,temp,ans,n;
	
	printf("Enter value N = ");
	scanf("%d",&n);
	temp=n;
	
	for(ans=0; n!=0; i++)
	{
		s=n%10;
		ans=ans*10+s;
		n=n/10;
		
	}
	printf("%d",ans);
}