#include<stdio.h>
 int main(){
 	int n;
 	//scanf("%d",&n);
 	n=3;
    int i;
    
    int first=1;
    for(i=1;i<n;i++){
    	first*=10;
	}
	int m=first;
	//printf("%d",first);
	
	while(m<m*10){
		m++;
		first=m;
		int sum=0;
		int j;
		int z;
		for(i=0;i<n;i++){
			int p=1;
			int j=first%10;
			first/=10;
			for(z=0;z<n;z++){
				p*=j;
			}
			sum+=p;
		}
		if(sum==m){
			printf("%d\n",sum);
		}
	}
 	
 	return 0;
 }