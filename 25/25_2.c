#include<stdio.h>

main()
{
	int a,b=3,c=5;
	printf("Enter the value :");
	scanf("%d",&a);
	sum(a,b,c);
	
}
sum(int a,int b,int c)
 {
 	if(a%b==0 && a%c==0)
 	{
 		printf("\nGiven number is  divisible by 3 and 5");
	}
	else
	{
		printf("\nGiven number is not divisible by 3 and 5");
	}
 }
