#include<stdio.h>
 int min(int a,int b);
 int main(){
 	int dividend,divisor;
 	scanf("%d/%d",&dividend,&divisor);
 	int i;
 	int t=0;
 	for(i=1;i<=min(dividend,divisor);i++){
 		if(dividend%i==0&&divisor%i==0){
 			t=i;
		 }
	 }
	 dividend/=t;
	 divisor/=t;
	 printf("%d/%d\n",dividend,divisor);
	 return 0;
 }
  int min(int a,int b){
    /*int min;
  	if(a>b){
  		min=b;
	  }
	else {
		 min=a;
	}
	return min; */
	return a<b ? a:b;
  } 