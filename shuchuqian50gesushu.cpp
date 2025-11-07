 #include<stdio.h>
 int main(){
    int x=2;
    int i;
    int cnt=0;
       while(cnt<50){
    	for(i=2;i<x;i++){
    		if(x%i==0){
    			break;
			}	
	}
	if(i==x){
	
	printf("%d ",x); 
	cnt++;
}
x++;
}
 	return 0;
 }
 