#include<stdio.h>
 int main(){
 	int i;
 	scanf("%d",&i);
 	int count=0;
 	double sum=0;
 	int number[100];
 	while(i!=-1){
 		 number[count]=i;
 		sum+=i;
 		count++;
 		scanf("%d",&i);
	 }
	 double average=sum/count;
	 if(count>0){
	 	printf("%d\n",sum/count);
	 }
	int x;
	for(x=0;x<count;x++){
		if(number[x]> average){
			printf("%d\n",number[x]);
		}
	}
	 return 0;
 }