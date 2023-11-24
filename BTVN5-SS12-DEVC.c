#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int n){
	int i;
	if ( n < 2) {
		return false;
	} else 
	    if (n==2 || n==5 || n==7 || n==3 || n==11) {
	    	return true;
		} else 
		    if (n%2 == 0 || n%3 == 0 ) {
		    	return false;
			}
    i=-1;
    while (i < sqrt(n)) {
    	i += 6;
    	if ( n%i == 0 || n%(i+2) == 0) {
    		return false;
		}
	}
    return true;   	
}
int main() {
    int n,m;
    int i,j;
    int choice;
    int a[100][100];
    do {
        printf("1.nhap mang\n");
        printf("2.in mang theo ma tran\n");
        printf("3.in ra cac phan tu o goc\n");
        printf("4.in ra cac phan tu tren duong bien\n");
        printf("5.in ra cac phan tu tren duong cheo chinh va phu\n");
        printf("6.in ra cac phan tu la so nguyen to\n");
        printf("7.thoat\n");
        printf("nhap lua chon \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("nhap so hang ");
            scanf("%d",&n);
            printf("nhap so cot");
            scanf("%d",&m);
            for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                    printf("a[%d][%d]=",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            break;
        case 2:
            for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                    printf("%d  ",a[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("phan tu o goc trai ben tren la %d\n ", a[0][0]);
            printf("phan tu o goc trai ben duoi la %d\n ", a[n-1][0]);
            printf("phan tu o goc phai ben tren la %d\n ", a[0][m-1]);
            printf("phan tu o goc phai ben duoi la %d\n ", a[n-1][m-1]);
            break;
        case 4:
            printf("\nduong bien trai la ");
			for (i=0;i<n;i++) {
			    printf("%d " , a[i][0]);
			}
            printf("\nduong bien phai la ");
			for (i=0;i<n;i++) {
			    printf("%d " , a[i][m-1]);
			}
            printf("\nduong bien tren la ");
			for (j=0;j<m;j++) {
			    printf("%d ", a[0][j] );
			}
            printf("\nduong bien duoi la ");
			for (j=0;j<m;j++) {
                printf("%d ", a[n-1][j]);
			}
            break;
        case 5:
			if (m == n) {
				i = 0;
				j = 0;
				printf("duong cheo chinh la ");
				while (i<n) {
					printf("%d ", a[i][j]);
					i++;
					j++;
				}
				printf("\n");
			    i = 0;
			    j = n-1;
			    printf("duong cheo phu la ");
				while (j>=0) {
					printf("%d ", a[i][j]);
					i++;
					j--;
				}
				printf("\n");
			} else printf("khong co duong cheo chinh va phu\n");
			break;
        case 6:
            printf("cac phan tu la so nguyen to trong mang la ");
            for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                    if ( prime(a[i][j]) ) printf("%d ",a[i][j]);                                        
                }
            }
            printf("\n");
            break;
        case 7:
            printf("thoat\n");
            break;
        default:
            printf("khong hop le\n");
            break;
        }

    }   while (choice != 7);
}
