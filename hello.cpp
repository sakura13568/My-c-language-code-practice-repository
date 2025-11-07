/* #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
  int main(){
  	srand(time(0));
  	int a=rand()%100;
  	printf("%d",a);
  	
   
  		return 0;
  } */
 /* #include<stdio.h>
  int main(){
  	int a;
  	printf("sizeof(int)=%ld\n",sizeof(int));
  	printf("sizeof(double)=%ld",sizeof(double));
  	return 0;
  }*/
 /* #include<stdio.h>
  int main(){
  	char c=127;
  	int a=255;
  	c=c+1;
  	printf("%ld\n",sizeof(char));
  	printf("%ld\n",sizeof(int));
  	printf("%d\n",a);
  	printf("%d",c);
  	return 0;
  }*/
  //while语句中的判断条件也会执行
  /*#include<stdio.h>
  int main(){
  	int a=0;

  	while(++a<5){
  		printf("%d\n",a);
	  }
	  printf("   %d",a);
  	
  	return 0;

    }*/
   /* #include<stdio.h>
    int main(){
    	int a,b;
    //	scanf("%o %x\n",&a,&b); 错误事例在scanf后加\n不代表换行，会导致需要额外输出
        scanf("%o %x",&a,&b);
    	printf("%d,%o",a,b);
    	return 0;
	}*/
	
/*	#include<stdio.h>
	int main(){
		long long c=-1;
		int a=-1;
		printf("%u,%u\n",c,a);
		printf("%d,%d",c,a);
		return 0;
	} */
	//四舍六入五成双，
/*#include<stdio.h>
int main(){
	double ff=-0.0045;//5前一位是偶数则舍去
	double ff=-0.0035;//5的前一位是奇数进位
	printf("%.3f",ff);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%f\n",12.0/0.0);
	printf("%f\n",-12.0/0.0);
	printf("%f\n",0.0/0.0);
	return 0;
}*/
// 在scanf中%c前加空格表示跳过所有空白字符，直到读到下一个非空白字符
#include<stdio.h>
int main(){
	/*int i;
	char c; 
	scanf("%d",&i);
	c=i;
	//char d=' ';
	printf("c=%d\n",c);
	printf("c=%c",c);
//	printf("d=%d",d); */
int i;
char c;
char a='a';
char b='A';
c=b-a;
int m='a'+c;
printf("%c",m);
//scanf("%d%c",&i,&c);//区分这两个scanf
//scnaf("%d %c",&i,&c);//
//printf("i=%d,c=%d,c=''",i,c,c);
	return 0;
}
	