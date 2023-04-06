#include<stdio.h>
main()
{
	FILE *p;
	int n,i,dummy=0;
	printf("Enter the value  : ");
	scanf("%d",&n);
	p=fopen("fh.c","w");
	if(p==NULL)
	{
		printf("you can not open this file...");
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				dummy=1;
			}
		}
		if(dummy==0)
		{
			printf(p,"%d",n);
	    }
	    printf("you can open this file...");
	}
}
