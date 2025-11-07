#include<stdio.h>
//只适用于末尾不是0的整数,且麻烦
 /*int main(){
     int x;
     //scanf("%d",&x);
	 x=12304;
	 int sum=0;
	 int t;
	 while(x>0){
	 	t=x%10;
	 	sum=sum*10+t;
	 	x/=10;
	 }
	// printf("%d",sum);
	 int m;
	 while(sum>0){
	 	m=sum%10;
	 	printf("%d",m);
	 	if(sum>9){
	 		printf(" ");
		 }
	 	sum/=10;
	 }

	 return 0;
 }*/
/* x=12354
 1245/1000 1
 1245%1000 245
 1000/10 100
 245/100 2
 245%100 45
100/10 10
  45/10 4
  45%10 5
  10/10 1
  5/1 5
  5%1 5
  1/10 0 */
  //更加简便，且适用于所有整数
 int main(){
     int x;
     scanf("%d",&x);
     int mask=1;
     int t=x;
     while(t>9){
     	t/=10;
     	mask*=10;
	 }
	 int d;
	 while(mask>0){
	 	d=x/mask;
	 	printf("%d",d);
	 	if(mask>9){
	 		printf(" ");
		 }
		 x%=mask;
		 mask/=10;
	 	
	 } 
 	return 0;
 }