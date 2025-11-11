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
 /* #include<stdio.h>
 #include<stdbool.h>
 int main(){
 	bool b=6>5;
 	bool a=0;
 	printf("%d,%d",b,a);
 	return 0;
 }*/
/* #include<stdio.h>
  void cheer(int i){
  	printf("%d",i);
  }
  int main(){
  	cheer(2.4);
  	return 0;
  }*/
  
  #include<stdio.h> //不同函数中的变量即使是变量名相同也不是同一个变量
  void swap(int a,int b);
  int main(){
  	int a=5;
  	int b=6;
  	swap(a,b);
  	printf("%d,%d",a,b);
  	return 0;
  }
  void swap(int a,int b){
  	int t=a;
  	a=b;
  	b=t;
  }