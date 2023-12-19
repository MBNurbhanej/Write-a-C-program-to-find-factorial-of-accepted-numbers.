#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i,fact=1;
	clrscr();

	printf("Enter the Number=");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}

	printf("Factorial of %d is=%d",no,fact);

	getch();
}