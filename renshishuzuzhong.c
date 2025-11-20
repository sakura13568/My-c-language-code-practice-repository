/*#include<stdio.h>
 int main(){
 	int min=5;
 	int *p=&min;
 	printf("*p=%d\n",*p);
 	printf("p[0]=%d",p[0]);// 在C语言中数组a[i]就等价于*(a+i*sizeof(a));
 	return 0;
 }*/
/* #include<stdio.h>
 int main(){
 	int a[]={1,2,3,4,5,-1};
 	int i;
 	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
 		printf("%d\n",a[i]);
	 }
	 int *p=a;
	 while(*p!=-1){
	 	printf("%d\n",*p++);
	 }
	 return 0;
}*/
#include<stdio.h>
int main(){
	char* a;
	int min=5;
	int *b;
	double* c;
	printf("%zu\n",sizeof(a));
	printf("%zu\n",sizeof(char*));
	printf("%zu\n",sizeof(b));
	printf("%zu\n",sizeof(int*));
	printf("%zu\n",sizeof(c));
	printf("%zu\n",sizeof(double*));
	printf("%zu\n",sizeof(&min));
	return 0;
}

