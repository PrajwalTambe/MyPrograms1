#include<stdio.h>

char CharToggle(char C)
{
	if((C>='A')&&(C<='Z'))
	{
		return C + 32;		
	}
	else if((C>='a')&&(C<='z'))
	{
		return C - 32;
	}
	
}

int main()
{
	char ch= '\0',CRet ='\0';
	
	
	printf("Enter Charachter\n");
	scanf("%c",&ch);
	CRet=CharToggle(ch);
	
	
	printf(" Toggle Letter is : %c\n",CRet);
	return 0;
}