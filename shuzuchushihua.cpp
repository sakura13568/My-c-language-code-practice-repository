#include<stdio.h>
 int main(){
 	int a[]={[0]=1,2,};
 for(int i=0;i<2;i++){
 	printf("%d=%d\n",i,a[i]);
 	//	printf("%d\n",sizeof(a)/sizeof(a[1]));
 	 }
   
 	return 0;
 }