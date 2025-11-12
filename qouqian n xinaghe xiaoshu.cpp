#include<stdio.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	double a=1;
 	double b=2;
 	double sum=2;
 	int count=1;
 	while(count<n){
 		int m=0;
 		m=a+b;
 	    a=m;
 	    b=a+b;
 	    sum+=b/a;
 	    count++;
	 }
	 printf("%.2f",sum);
 	return 0;
 }