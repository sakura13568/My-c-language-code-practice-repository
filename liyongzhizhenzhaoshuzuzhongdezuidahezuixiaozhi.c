#include<stdio.h>
void minmax(int a[],int length,int *min,int *max);
int main(){
	int a[]={7,2,3,5,6,6,1,};
	int max;
	int min;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("main %d\n",sizeof(a));
	printf("min=%d,max=%d\n",min,max);
	return 0;
}
void minmax(int a[],int length,int *min,int *max){
	int i=0;
	printf("minmax %d\n",sizeof(a));
	*min=a[0];
	*max=a[0];
	for(i=0;i<length;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		else if(a[i]>*max){
			*max=a[i];
		}
	}
}