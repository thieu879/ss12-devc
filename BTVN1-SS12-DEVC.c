#include<stdio.h>
int sumNumbers(int a, int b){
	int sum=a+b;
	return sum;
}
int diffirentNumbers(int a, int b){
	if(a>b){
		int diffirent=a-b;
	}else{
		int  diffirent=b-a;
	}
}
int main(){
	int a,b,c;
	printf("Nhap cac so a, b, c");
	scanf("%d %d %d",&a,&b,&c);
	printf("Tong 2 so a va b la:%d\n",sumNumbers(a,b));
	printf("Tong 2 so a va c la:%d\n",sumNumbers(a,c));
	printf("Tong 2 so b va c la:%d\n",sumNumbers(b,c));
	printf("Hieu 2 so a va b la:%d\n",diffirentNumbers(a,b));
	printf("Hieu 2 so a va c la:%d\n",diffirentNumbers(a,c));
	printf("Hieu 2 so b va c la:%d\n",diffirentNumbers(b,c));
	return 0;
} 
