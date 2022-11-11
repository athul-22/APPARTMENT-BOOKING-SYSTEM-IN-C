#include<stdio.h>
int main(){
	int tax,taxper,r1 =500,r2=1500,r3=3500,r4=7500;
	int *p1,*p2,*p3,*p4;
	int n;
	
	p1 = &r1;
	p2 = &r2;
	p3 = &r3;
	p4 = &r4;
	
	printf("CHOOSE AN OPTION FROM BELOW");
	printf("1 - 1BHK \n 2 - 2BHK \n 3 - 3BHK \n 4 - VILLA\n\n");
	scanf("%d",&n);
	
	if(n==1){
		printf("\n1BHK	RENT : 500	TAX : 18% TOTAL AMOUNT = %d\n",(r1*18/100)+500);
	}else if(n==2){
		printf("\n2BHK	RENT : 1500	TAX : 18% TOTAL AMOUNT = %d\n",(r2*18/100)+1500);
	}else if(n==3){
		printf("\n3BHK	RENT : 3500	TAX : 18% TOTAL AMOUNT = %d\n",(r3*18/100)+3500);
	}else if( n==4 ){
		printf("\n4BHK	RENT : 7500	TAX : 18% TOTAL AMOUNT = %d\n",(r4*18/100)+7500);
	}else{
		printf("ENTER AN OPTION RANGE FROM 1-4");
	}

}
