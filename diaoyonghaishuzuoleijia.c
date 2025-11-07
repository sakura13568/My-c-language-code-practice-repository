/*#include<stdio.h>
 void sum(int begin,int end);
int main(){
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
}
 void sum(int begin,int end){
 	int i;
 	int sum=1;
 	for(i=begin;i<=end;i++){
	 sum+=i;
	 }
	 printf("%d\n",sum);
  
 }*/
 #include<stdio.h>
 int max(int n,int m){
 	int ret;
 	if(n>m){
 		ret=n;
	 }else {
	 	ret=m;
	 }
	 return ret;
 	
 }
 int main(){
 	int a,b;
 	a=1;
 	b=2;
 	int c;
 	max(a,b);
 	c=max(a,b);
 	printf("%d\n",max(a,b));
 	printf("%d",c);
 	return 0;
 }