#include<stdio.h>

typedef unsigned int UINT;

UINT strlenx(char *str)
{
		int iCnt = 0;
		
		if(str == NULL)
		{
		return 0;
		}
		
		while(*str!='\0')
		{
			iCnt++;
			str++;
		}
 return iCnt;
 		
}

int main()
{
	char Arr[20];
    int iRet=0;	

	printf("Enter Your Name\n");
	scanf("%[^'\n']s",Arr);

 //char *ptr=NULL;

	iRet=strlenx(Arr);
	printf("Length of String is : %d\n",iRet);


	return 0;
}