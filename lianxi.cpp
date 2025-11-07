/*#include<stdio.h>
 int main(){
 	printf("%ld\n",sizeof(double));
 	printf("%ld",sizeof(float));
 	return 0;
 }*/
/* #include<stdio.h>
 int main(){
 	char i='1';
 	int a=3;
 	printf("%c\n",i+a);
 	printf("%d",i+a);
 	return 0;
 }*/
/* #include<stdio.h>
 int main(){
 //	char a='032';错误示例，只有在其他整数中输入032才代表一个八进制数，而在char类型表字符是要用\加上一个八进制数
 	char b='\032';
 	printf("%c,%d\n",b,b);
 	//printf("xiangdeng\'");
 	printf("%c,%d",a,a);
 	return 0;
 }*/
 #include<stdio.h>
 #include<stdbool.h>
 int main(){
 	bool b=6>5;
 	bool a=0;
 	printf("%d,%d",b,a);
 	return 0;
 }