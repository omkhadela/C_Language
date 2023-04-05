#include<stdio.h>

main(){
	FILE *p,*p1;
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	p=fopen("ucc.c","r");
	p1=fopen("ucc2.c","w");
	
	if(p==NULL && p1==NULL)
	{
		printf("You can open any file...");
	}
	else
	{
		printf("You can open this file...");
		fprintf(p,"The value of a : %d",a);
		fscanf(p,"The value of a : %d",&a);
		fprintf(p1,"The value of a : %d",a);
	}
}
