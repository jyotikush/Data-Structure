#include<stdio.h>
#include<conio.h>


void  main()
{
	float num1, num2;
	float *ptr1, *ptr2;
	float add, sub, mult, div;

	ptr1 =&num1;
	ptr2 =&num2;

	printf("Enter any two numbers:");
	scanf("%f%f",ptr1,ptr2);

	add =(*ptr1) + (*ptr2);
	sub =(*ptr1) - (*ptr2);
	mult =(*ptr1) * (*ptr2);
	div =(*ptr1) / (*ptr2);

	printf("add = %.2f\n",add);
	printf("sub = %.2f\n",sub);
	printf("mult = %.2f\n",mult);
	printf("div = %.2f\n",div);


}








