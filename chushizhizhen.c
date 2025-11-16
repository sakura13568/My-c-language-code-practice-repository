#include<stdio.h>
int main(){
 int a[10];
 printf("%p\n",&a);
 printf("%p\n",a);
 printf("%p\n",a[10]);
 printf("%p",&a[10]);
 return 0;
}