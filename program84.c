#include<stdio.h>
#include<stdlib.h>
 
int Maximun(int Arr[], int iSize)
{	
  int i=0,iMax=0;
	for(i =0 ; i<iSize; i++)
	{
		 if(Arr[i]> iMax)
		{
			iMax=Arr[i];
		}
	}
	return iMax;
	
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
	
   iRet = Maximum(ptr,iLength);
	printf("Maximum is :%d\n",iRet);
	
		
	free(ptr);
	return 0;
}
