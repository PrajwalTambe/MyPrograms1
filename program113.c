#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char c)
{
	if((c>='0')&&(c<='9'))
	{
		return true;
		
	}
	else 
	{
		return false;
	}
}

int main()
{
	char ch= 0;
	bool bRet = false;
	
	printf("Enter Charachter\n");
	scanf("%c",&ch);
	bRet=CheckDigit(char c);
	
	if(bRet == true)
	{
		printf("It Is Digit\n");
	}
	else
	{
		printf("It Is Not Digit\n");
	}

	return 0;
}