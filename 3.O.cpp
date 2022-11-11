#include<stdio.h>
int main(){
	int n,m;
	printf("MENU\n\n");
	printf("CHOOSE AN OPION FROM BELOW \n 1 - HOUSE DETAILS \n 2 - CUSTOMER DETAILS \n 3 - RENT DETAILS \n 4 - CALCULATE RENT \n\n");
	scanf("%d",&n);
	int tax,taxper,r1 =500,r2=1500,r3=3500,r4=7500;
	
	switch(n){
		case 1:
		 	printf("CHOOSE AN OPION FROM BELOW \n 1 - 1BHK \n 2 - 2BHK \n 3 - 3BHK \n 4 - INDIVIDUAL VILLA \n");
			scanf("%d",&m);
			switch(m){
				case 1: 
					printf("1BHK\n");
					printf("1 BED ROOM\n");
					printf("1 HALL\n");
					printf("1 KITCHEN\n");
					printf("1 WIDE VIEW BALCONY + WIFI + FREE CLEANING SERVICE");
					break; 
				case 2: 
					printf("2BHK\n");
					printf("2 BED ROOM\n");
					printf("1 HALL\n");
					printf("1 KITCHEN\n");
					printf("1 WIDE VIEW BALCONY + WIFI + FREE CLEANING SERVICE");
					break; 	
				case 3: 
					printf("3BHK\n");
					printf("3 BED ROOM\n");
					printf("1 HALL\n");
					printf("1 KITCHEN\n");
					printf("1 WIDE VIEW BALCONY + WIFI + FREE CLEANING SERVICE");
					break; 	
				case 4:
					printf("INDIVIDUAL VILLA\n");
					printf("3 BED ROOMS\n");
					printf("1 HALL\n");
					printf("1 KITCHEN\n");
					printf("SEA VIEW BALCONY + WIFI + FREE CLEANING SERVICE");
					break;	
				default:
					printf("WRONG INPUT / CHOICE");
					break; 
					
			}
			break; 
			
		case 2: 
			printf("SL 	NAME	FLAT.NO. 	MOBILE NUMBER	PAYMENT\n\n");
			printf("1	AKHIL	192		 	9999999999		Y\n");
			printf("2	ADARSH	552			9999999999		Y\n");
			printf("3	SUNIL	424			9999999999		Y\n");
			printf("4	ANIL	132		 	9999999999		Y\n");
			printf("5	SADHIKA	333			9999999999		Y\n");
			printf("6	EMLI	373	 		9999999999		Y\n");
			printf("7	SALIH	212			9999999999		Y\n");
			printf("8	MISHAB	847			9999999999		Y\n");
			break; 
		case 3:
			printf("SL NO.  TYPE     AVAILABLE ROOMS     RENT / DAY\n\n");  // TITLE
	
			printf("1       1BHK         15              500 Rs\n"); 
			printf("2       2BHK         23              1500 Rs\n");
			printf("3       3BHK         10              3500 Rs\n");
			printf("4       VILLA        05              7500 Rs\n"); 
			break; 	
		case 4: 
			printf("TO CALCULATE RENT \n");
			printf("1BHK	RENT : 500	TAX : 18% TOTAL AMOUNT = %d\n",(r1*18/100)+500);
			printf("2BHK	RENT : 1500	TAX : 18% TOTAL AMOUNT = %d\n",(r2*18/100)+1500);
			printf("3BHK	RENT : 3500	TAX : 18% TOTAL AMOUNT = %d\n",(r3*18/100)+3500);
			printf("4BHK	RENT : 7500	TAX : 18% TOTAL AMOUNT = %d\n",(r4*18/100)+7500);

			break; 	
		default:
			break; 
								
	}
}
