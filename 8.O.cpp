#include<stdio.h>
#include<string.h>

	struct customer{
		char name[50];
		long int number;
		char type[20];
		int room;
	};
	
	int main(){
		int n,i;
		
		struct customer c1;
		
		strcpy(c1.name,"ATUL");
		c1.number = 9999999999;
		strcpy(c1.type,"VILLA");
		c1.room = 223;
		
		printf("CUSTOMER DETAILS USING STRUCTURE \n\n");
		printf(" NAME : %s \n MOBILE NUMBER %ld \n TYPE : %s \n ROOM NO. : %d",c1.name,c1.number,c1.type,c1.room);
		
	}
