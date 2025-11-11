/*#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int count[10];
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++;
		}
		scanf("%d",&x);
	}
	
	for(x=0;x<10;x++){
		printf("%d %d",x,count[x]);
	}
	return 0;
} */
#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	const int number=10;
	int count[number];
    int x;
    for(x=0;x<number;x++){
    	count[x]=0;
	}
	while(i!=-1){
		if(i>=0&&i<=9){
			count[i]++;
		}
		scanf("%d",&i);
	}
	for(x=0;x<number;x++){
		printf("%d %d\n",x,count[x]);
	}
	return 0;
}