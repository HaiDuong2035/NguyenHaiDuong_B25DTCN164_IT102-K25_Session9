#include <stdio.h>
#include <math.h>
int main(){
	int num, sum;
	float average;
	printf("Nhap so phan tu: ");
	scanf("%d",&num);
	int arr[num];
	for (int i=0; i<num; i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0; i<num; i++){
		sum=sum+arr[i];
	}
	average=sum/num;
	printf("Gia tri trung binh: %.2f",average);
    return 0;
}
