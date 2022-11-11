#include<stdio.h>
#include<string.h>
main()
{

	int i,n,j,a;
	char name[20];
	char cus[30][10]={"Mansa","Aly","Angela","Abraham","Aby","Alby","Utaman","Umesh","Manasa","milli","\0"};
	int room[10];
	
	for(i=0;i<10;i++){
		
	printf("Please enter the room number of %s : ", cus[i]);
	scanf("%d",&room[i]);
	
	}

	printf("\n\nENTER 1 - TO SEARCH \n 2 - TO PRINT ALL CUSTOMER DETAILS");
	scanf("%d",&n);

	switch(n){
		case 1:
			printf("\n\nENTER THE NAME TO SEARCH\n");
			scanf("%s",&name);
			
			for(i=0;i<=10;i++){
				int i;
				if(name == cus[i]){
					a = 1;
				}else{
					printf("%s FOUND AT %d",cus[i],i);
			}
		}
		if(a == 1){
			printf("ELEMENT NOT FOUND");
		}
		break;
		
		case 2:
			for(i=0;i<10;i++){
    		printf("%s : %d\n",cus[i],room[i]);
			}
	}
}

