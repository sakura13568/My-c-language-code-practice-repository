#include<stdio.h>
 int main(){
 	int a;
 	scanf("%d",&a);
 	int i,j;
 	for(i=1;i<=a;i++){
 		for(j=1;j<=i;j++){
 			printf("%d*%d=%d",j,i,i*j);
 			if(i*j<10){
 				printf("   ");
			 } else{
			 	printf("  ");
			 }
		 }
		 printf("\n");
	 }
 	
 	
 	return 0;
 }