#include<stdio.h>
main()
{
	FILE *p;
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	p=fopen("om1.c","a");
	if(p==NULL)
	{
		printf("you can not open this file...");
	}
	else
	{
		printf("you can open this file...");
	fprintf(p,"The value of a : %d",a);
	fscanf(p,"%d",&a);
	fprintf(p,"The value of a : %d",a);
	}
}
