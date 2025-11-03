#include <stdio.h>
#include <math.h>
int main(){
	int num, sum;
	printf("Nhap so phan tu:");
	scanf("%d",&num);
	int arr[num];
	for (int i=0; i<num; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for (int i=0; i<num; i++){
		int check=1;
		for (int j=2; j<=sqrt(arr[i]); j++){
			if (arr[i]%j==0){
				check=0;
				break;
			}
		}
		if (check==1 and arr[i]>1){
			sum=sum+arr[i];
		}
	}
	printf("Tong so nguyen to: %d",sum);
    return 0;
}
