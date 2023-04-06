#include<stdio.h>
main()
{
	FILE *p;
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	p=fopen("om2.c","r");
	if(p==NULL)
	{
		printf("you can not open this file...");
	}
	else
	{
		printf("you can open this file..."); 
	}
}
