#include<stdio.h>
#include<stdlib.h>
 
int Minimum(int Arr[], int iSize)
{
	int i=0, iMin= Arr[0];
	
	for(i =0 ; i<iSize; i++)
	{
		 if(Arr[i]<iMin)
		{
			iMin= Arr[i];
		}
	}
	return iMin;
	
}
int main()
{
	int iLength = 0, i =0, iRet = 0;
	int *ptr= NULL;
	
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr= (int *)malloc(sizeof(int) *iLength);
	
	printf("Enter Elements\n");
	
	for(i = 0 ; i< iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
   iRet = Minimum(ptr,iLength);
	printf("Minimun is :%d\n",iRet);
	
		
	free(ptr);
	return 0;
}