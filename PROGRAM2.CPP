#include<stdio.h>
#include<conio.h>

void swap(int *num1,int *num2);
int main()
{
	int num1, num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);

	printf("Before swapping in main n");
	printf("value of num1 = %d \n",num1);
	printf("value of num2 = %d \n",num2);

	swap(&num1, &num2);

	printf("After swapping in main n");
	printf("value of num1 = %d \n",num1);
	printf("value of num2 = %d \n",num2);

	return 0;
 }
 void swap(int  *num1,int  *num2)
 {
	int temp;

	temp= * num1;
	*num1= *num2;
	*num2= temp;

	printf("After swapping in main n");
	printf("value of num1 = %d \n",*num1);
	printf("value of num2 = %d \n",*num2);
 }