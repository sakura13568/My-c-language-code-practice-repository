/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    scanf("%d",&number);
   // int a[number]; c99才允许这样写
   int *a;
   a=(int*)malloc(number*sizeof(int));
   int b;
   //for(b=0;b<number;b++){
   //	scanf("%d",&a[b]);
  // }
   int i;
   for(i=0;i<number;i++){
   	printf("%p ",&a[i]);
   }
   free(a);
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	void* a;
	int cnt=0;
	while((a=malloc(100*1024*1024))){
			cnt++;
	}
	printf("给了我%d00MB",cnt);
	return 0;
} 
	 