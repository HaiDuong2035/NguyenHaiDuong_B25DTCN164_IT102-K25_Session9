#include <stdio.h>
#include <math.h>
int main(){
	int n, sum;
	printf("Nhap so cac phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	for (int i=0; i<n; i++){
		sum=sum+arr[i];
	}
	printf("Tong: %d",sum);
    return 0;
}

