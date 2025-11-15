#include<stdio.h>
 int search(int x,int prime[],int count);
 int main(){
    int number=100;
 	int isprime[100]={2};
 	int count=1;
 	int i=3;
 	for(i=3;i<number;i++){
 		if(search(i,isprime,count)){
 			isprime[count++]=i;
		 }
	 }
	 for(i=0;i<count;i++){
	 	printf("%d\n",isprime[i]);
	 }
    return 0;
 }
 int search(int x,int prime[],int count){
 	int ret=1;
 	int i;
 	for(i=0;i<count;i++){
 		if(x%prime[i]==0){
 			ret=0;
 			break;
		 }
	 }
 	return ret;
 }