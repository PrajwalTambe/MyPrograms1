#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcnt.h>

int main()
{
	int fd = 0;
	char Arr[]="Hello";
	
	fd = open("LB17.txt",O_RDWR);
	
	if(fd == -1)
	{
		
		printf("unable to open file\n");
	}
	
	write(fd,Arr,5);
	
	close(fd);
	
	return 0;
	
}