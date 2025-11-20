#include<stdio.h>
void f(int *p);
void g(int k);
 int main(){
 	int i=6;
 	int* p;
 	int *b;
 	p=&i;
 	b=&i;
 	f(&i);
 	g(i);
 	printf("%p\n",&i);
 	printf("%p\n",p);
 	printf("%p\n",b);
 	return 0;
 }
 void f(int *p){
 	printf("%p\n",p);
 	*p=26;
 	
 }
 void g(int k){
 	printf("%d\n",k);
 }