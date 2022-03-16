#include<stdio.h>


char CapitalToSmall(char c)
{
	if((c>='A')&&(c<='Z'))
	{
		return c + 32;	
	}
	
}

int main()
{
	char ch= '\0' , cRet = '\0';
	
	
	printf("Enter Charachter\n");
	scanf("%c",&ch);
	cRet=CapitalToSmall(ch);
	
	
	printf("Small Letter is : %c\n",cRet);
	return 0;
}