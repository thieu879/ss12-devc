#include<stdio.h>
int multiplication(int a,int b){
	int times=a*b;
	return times;
}
int division(int a,int b){
	if(a>b){
		int divided=a/b;
		if(a%b!=0){
			printf("a khong chia het cho b");
		}
	}else{
		int divided=b/a;
		if(b%a!=0){
			printf("b khong chia het cho a");
	}
	return divided;
}
int main(){
	int a,b,c;
	printf("tich cua 2 so a va b la:%d",multiplication(a,b));
	printf("tich cua 2 so a va c la:%d",multiplication(a,c));
	printf("tich cua 2 so b va c la:%d",multiplication(b,c));
	printf("%d",division(a,b));
	printf("%d",division(a,c));
	printf("%d",division(c,b));
	return 0;
}
