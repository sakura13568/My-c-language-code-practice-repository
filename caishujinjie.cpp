#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	 srand(time(0));
	 int a=rand()%100; 
	 printf("请输入数字：\n");
	 int x;
	 int count=0;
	 int N=4;
	 do{
	 	scanf("%d",&x);
	 	count++;
	 	if(x>a&&x!=-1){
	 		printf("too big\n");
		 }
		 else if(x<a&&x!=-1){
		 	printf("too small\n");
		 	if(count>4){
		 	 break;
			 }
		 	
		 }
	 }while(x!=a&&x!=-1);
	 if(count==1&&x!=-1){
	 	printf("Bingo!\n");
	 }
	 else if(count<3&&x!=-1){
	 	printf("Lucky You!\n");
	 }
	 else if(count>=3&&count<=N&&x!=-1){
	 	printf("Good Guess!\n");
	 }
     else if(count>4||x==-1){
	 	printf("Game Over!\n");
	 }
	return 0;
}