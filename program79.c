#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
	int iSum = 0, i = 0;
	float fResult = 0.0f;
	
	for(i=0; i<iSize; i++)
	{ 
		iSum = iSum + Arr[i];
	}

	fResult = (float)iSum / (float)iSize;
	return fResult;
}
int main()
{
	int iLength = 0, i =0;
	int *ptr= NULL;
	float fRet = 0.0f;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr= (int *)malloc(sizeof(int) *iLength);
	
	printf("Enter Elements\n");
	
	for(i = 0 ; i< iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	fRet = Average(ptr,iLength);
	printf("Average is : %.2f\n",fRet);
	
	printf("Enter Data is :\n");
	
	free(ptr);
	return 0;
}