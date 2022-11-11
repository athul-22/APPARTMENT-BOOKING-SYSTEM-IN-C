#include<stdio.h>
// DECLARING FUNCTIONS

int appartAvailability(int a,int b,int c,int d);
char customerDerails(char cus[20]);
int rentDetails(int a);
int main(){
	int a,b,c,d;
	char cus[20];
	
	// CALLING FUNCTIONS
	
	appartAvailability(a,b,c,d);
	customerDerails(cus);
	rentDetails(a);
	
}

appartAvailability(int a,int b,int c,int d){
	
		printf("APPARTMENT AVAILABILITY \n\n");
		printf("1BHK - 10 ROOMS AVAILABLE \n");
		printf("2BHK - 20 ROOMS AVAILABLE \n");
		printf("3BHK - 15 ROOMS AVAILABLE \n");
		printf("VILLA - 10 ROOMS AVAILABLE \n\n");
}

	char customerDerails(char cus[20]){
			printf("CUSTOMER DETAILS \n\n");

			printf("\nSL 	NAME	FLAT.NO. 	MOBILE NUMBER	PAYMENT\n\n");
			printf("1	AKHIL	192		 	9999999999		Y\n");
			printf("2	ADARSH	552			9999999999		Y\n");
			printf("3	SUNIL	424			9999999999		Y\n");
			printf("4	ANIL	132		 	9999999999		Y\n");
			printf("5	SADHIKA	333			9999999999		Y\n");
			printf("6	EMLI	373	 		9999999999		Y\n");
			printf("7	SALIH	212			9999999999		Y\n");
			printf("8	MISHAB	847			9999999999		Y\n");
	}

int rentDetails(int a){
			int tax,taxper,r1 =500,r2=1500,r3=3500,r4=7500;
			printf("\n\nRENT DETAILS\n\n");
			printf("1BHK	RENT : 500	TAX : 18% TOTAL AMOUNT = %d\n",(r1*18/100)+500);
			printf("2BHK	RENT : 1500	TAX : 18% TOTAL AMOUNT = %d\n",(r2*18/100)+1500);
			printf("3BHK	RENT : 3500	TAX : 18% TOTAL AMOUNT = %d\n",(r3*18/100)+3500);
			printf("4BHK	RENT : 7500	TAX : 18% TOTAL AMOUNT = %d\n",(r4*18/100)+7500);
}


