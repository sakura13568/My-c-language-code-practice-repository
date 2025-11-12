 #include<stdio.h>
  int main(){
  	int numer,n;
  	scanf("%d %d",&numer,&n);
  	int count=0;
  	  while(1){
  		int a;
  		scanf("%d",&a);
  		count++;
  		if(a<0||count>4){
  			printf("Game Over!\n");
  			break;
		  }
		  else if(a<numer){
		  	printf("Too Small!\n");
		  }
		  else if(a>numer){
		  	printf("Too Big!\n");
		  }
		  else  {
			  	if(count==1){
			  	printf("Bingo!\n");
			  	break;
			  }
			  else if(count<=3){
			  	printf("Lucky you!\n");
			  	break;
			  }
			  else  {
			  	printf(" Good Guess!\n");
			  	break;
			  }
		  }
	  } 
  	return 0;
  }