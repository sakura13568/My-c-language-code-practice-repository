 #include<stdio.h>
 
int main(){
  double number=0;
  double sum=0;
  double count=0;
  printf("请输入数字：");
  scanf("%lf",&number);
  	while(number!=-1){
  		sum+=number;
  		count++;
  		scanf("%lf",&number);
	  }
  printf("输入数字的平均数是:%f",sum/count);
    return 0;
}