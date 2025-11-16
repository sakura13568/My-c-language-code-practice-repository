#include<stdio.h>
int main(){
	char arr[][3]={{'1','2','3'},
	              {'4','5','6'},
				  {'*','0','#'}};
	for(int i=0;i<3;i++){
		for(int x=0;x<3;x++){
			printf("%c ",arr[i][x]);
		}
	  printf("\n");
	}
	return 0;
}
