#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j;
	int a[3][3],b[3][3],c[3][3],d[3][3];

	printf("Enter the elements of matrix \n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {

	   scanf("%d",&a[i][j]);

	   }
       }

       printf("Enter the  second elements of matrix \n");
       for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {

	     scanf("%d",&b[i][j]);

	   }


	 }

	 printf("The Addition of two matrix are \n");
	 for(i=0;i<3;i++)
	 {
		printf("\n");
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j] +b[i][j];
			printf("\t%d",c[i][j]);

		}

	  }

	 printf("\nthe Substraction of two matrix are \n");
	 for(i=0;i<3;i++)
	 {
		printf("\n");
		for(j=0;j<3;j++)
		{
			d[i][j] =a[i][j]-b[i][j];
			printf("\t%d",d[i][j]);
		}
	  }
	getch();

}