#include<stdio.h>
 int main(){
 	int numer=25;
 	int prime[numer];
 	int i;
 	for(i=0;i<numer;i++){
 		prime[i]=1;
	 }
 	int x=2;
    for(x=2;x<numer;x++){
    	if(prime[x]){
    		for(i=2;x*i<numer;i++){
    			prime[x*i]=0;
			}
		}
	}
	for(x=2;x<numer;x++){
		if(prime[x]){
			printf("%d\t", x);
		}
	}
	printf("\n");
 	return 0;
 }