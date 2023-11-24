#include <stdio.h>
int symmetryTest(int A1[], int A[]){
	int i,j,m,n;
	for(i = 0; i<n;i++){
		for(j = 0; j<m;j++){
    		if(A1[m]==A[n]){
				printf("Mang doi xung nhau");
    		}else{
				printf("Mang khong doi xung nhau");
			}
		}
	}
}
int main(){
    int n;
    printf("Nhap so phan tu:");
    scanf("%d,",&n);
    int A[n];
    int i;
    for(i = 0; i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
    }
    int m;
    printf("Nhap so phan tu: ");
    scanf("%d,",&m);
    int A1[m];
    int j;
    for(j = 0; j<m;j++){
        printf("A1[%d] = ",j);
        scanf("%d", &A1[j]);
    }
    symmetryTest(A1, A);
}
