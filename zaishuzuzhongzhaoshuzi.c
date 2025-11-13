#include<stdio.h>
int search(int key,int a[],int length);
int main() {
	int a[]= {2,4,6,7,1,3,5,9,11,13,23,14,32,};
	int key;
	int loc;
	printf("请输入一个数字：\n");
	scanf("%d",&key);
	loc=search(key,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1) {
		printf("%d在第%d位上\n",key,loc+1);
	} else {
		printf("%d不存在\n",key);
	}
	return 0;
}
int search(int key,int a[],int length) {
	int i;
	int ret=-1;
	for(i=0; i<length; i++) {
		if(key==a[i]) {
			ret=i;
			break;
		}
	}
	return ret;
}