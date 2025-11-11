#include<stdio.h>
 int main(){
 	int M;
 	int N;
    scanf("%d %d",&M,&N);
 	int i;
 	int j;
 	int count=0;
 	int sum=0;
 	if(M==1){
 		M=2;
	 } 
			for(i=M;i<=N;i++){
			 int ispme=0;
 		for(j=2;j<i;j++){
 			if(i%j==0){
 				ispme++;
 				break;
			      }
			          }
		 if(ispme==0){
			 	count++;
			 	sum+=i;
			 }
		 }
  printf("%d %d",count,sum);
 	return 0;
 }
 
 