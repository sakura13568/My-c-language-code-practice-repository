/*#include<stdio.h>
   int main(){
   	int a;
   	a=6;
   	//scanf("%d",&a);
   	int i,j,k;
   	int cnt=0;
   	i=a;
   	while(i<=a+3){
   		j=a;
   		while(j<=a+3){
   			k=a;
   			while(k<=a+3){
   				if(i!=j){
   					if(i!=k){
   						if(j!=k){
   							printf("%d%d%d",i,j,k);
   							cnt++;
   							if(cnt<6){
   								printf(" ");
							   }
							   else { 
							   printf("\n");
							   cnt=0;
							   }
							   
						   }
					   }
				   }
   				k++;
			   }
   			j++;
		   }
   		i++;
	   }
   	
   	
   	return 0;
   }*/
   #include<stdio.h>
    int main(){
    	int a;
    	a=2;
    	//scanf("%d",&a);
    	int i,j,k;
    	int cnt=0;
    	for(i=a;i<=a+3;i++){
    		for(j=a;j<=a+3;j++){
    			for(k=a;k<=a+3;k++)
    			if(i!=k&&i!=j&&j!=k){
    			//	printf("%d%d%d",i,j,k);
    				cnt++;
    			/*	if(cnt<6){
    					printf(" ");
					}
					else {
						printf("\n");
						cnt=0;
					}*/
    				
				}
			}
		}
    	return 0;
	}