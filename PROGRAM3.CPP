#include<stdio.h>
#include<conio.h>

int sub (int a,int b)
{
	return a-b;
}
void main()
{
	clrscr();
	int(*funptr)(int,int)=sub;
	int result= funptr(10,4);

	printf("Using function pointer we get result:%d",result);


}