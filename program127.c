#include<stdio.h>

void Swap(char *p, char *q)
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	char ch1, ch2;
	
	printf("Enter first charachter\n");
	scanf("%c",&ch1);
	
	printf("Enter second charachter\n");
	scanf(" %c",&ch2);
	
	printf("Before swapping charachter are %c %c\n",ch1,ch2);
	
	Swap(&ch1,&ch2);
	
	printf("Af-ter swapping charachters are %c %c\n",ch1,ch2);
	
	return 0;
}