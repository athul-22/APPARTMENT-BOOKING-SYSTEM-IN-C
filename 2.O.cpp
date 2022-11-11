#include<stdio.h>
int main(){
	
	int selection,tax1,tax2,tax3,tax4;
	int p1,p2,p3,p4;
	
	tax1 = (500*18)/100;
	tax2 = (1500*18)/100;
	tax3 = (300*18)/100;
	tax4 = (7500*18)/100;
	
	p1 = 500;
	p2 = 1500;
	p3 = 3500;
	p4 = 7500;
	
	printf("BILLING SECTION\n");
	
	printf("CHOOSE THE APPARTMENT\n 1 - 1BHK \n 2 - 2BHK \n 3 - 3BHK \n 4 - VILLA\n\n");
	scanf("%d",&selection);
	
	if(selection == 1){
		printf("\n1BHK RENT BILL\n");
		printf("_______________\n");
		printf("Amount  : 500\n");
		printf("GST Tax : 18%% \n");
		printf("Tax     : %d\n",tax1);
		printf("_______________\n");
		printf("TOTAL AMOUNT :%d",p1+tax1);
	}
	
	else if(selection == 2){
		printf("\n2BHK RENT BILL\n");
		printf("_______________\n");
		printf("Amount : 1500\n");
		printf("GST    : 18%% \n");
		printf("Tax    : %d\n",tax2);
		printf("_______________\n");
		printf("TOTAL AMOUNT : %d",p2+tax2);
	}
	
	else if(selection == 3){
		printf("\n3BHK RENT BILL\n");
		printf("_______________\n");
		printf("Amount : 3500\n");
		printf("GST    : 18%%\n");
		printf("Tax    : %d\n",tax3);
		printf("_______________\n");
		printf("TOTAL AMOUNT :%d",p3+tax3);
		
	}else if(selection == 4){
		printf("\nVILLA RENT BILL\n");
		printf("_______________\n");
		printf("Amount : 7500\n");
		printf("GST    : 18%%\n");
		printf("Tax    : %d\n",tax4);
		printf("_______________\n");
		printf("TOTAL AMOUNT :%d",p4+tax4);
	}else{
		printf("ERROR IN SELECTION");
	}
}
