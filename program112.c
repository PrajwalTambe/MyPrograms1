#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
	if((c>=65)&&(c<=90))
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
	scanf("%c"&ch);
	bRet=CheckSmall(char c)
	

	
	DisplayTable();
	return 0;
}