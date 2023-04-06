#include<stdio.h>
int main()
{
      int a;
      FILE *p,*p1;
      int n;
      printf("Enter : ");
      scanf("%d",&n);
      p=fopen("rw1.txt","r");
      p1=fopen("rw2.txt","w");   
      if(p==NULL||p1==NULL)
      {
           printf("File does not exist..");
      }
      else
      {
      	printf("file exist...");
	  }
      
            while((a=fgetc(p))!=EOF)
            {
                  fputc(a,p1);
            }
      printf("File copied.....");
      return 0;
}
