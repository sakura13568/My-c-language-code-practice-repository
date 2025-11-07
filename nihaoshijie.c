#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main(){
 	srand(time(0));
 	int a=rand()%100;
 	int num;
 	int count;
 	printf("我已经想了一个1到100的数字");
 	do
	 {
 		printf("请输入数字：");
 		scanf("%d",&num);
 		count++;
 		if(num>a)
 		printf("你输入的数字偏大\n");
 		else if(num<a)
 		printf("你输入的数字偏小\n");
	 }while(num!=a);
 	 printf("恭喜你用了%d次猜对了\n",count);
 	return 0;
 }