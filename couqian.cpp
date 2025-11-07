#include<stdio.h>
int main(){
	int x;
	//scanf("%d",&x);
	x=2;
	int one, two ,five;
	for(one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/5;five++){
				if(1*one+2*two+five*5==x*10){
				printf("可以用%d个一角%d个两角%d个五角凑成%d元\n",one,two,five,x);
				goto m;
		                                	}
			}
		}
	}
m:
return 0;
}