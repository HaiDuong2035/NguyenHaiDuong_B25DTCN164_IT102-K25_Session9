#include <stdio.h>
#include <math.h>
int main(){
	int num;
	printf("Nhap so phan tu: ");
	scanf("%d",&num);
	int arr[num];
	for (int i=0; i<num; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Mang: ");
	for (int i=0; i<num; i++){
		printf("%d ",arr[i]);
	}
    return 0;
}
