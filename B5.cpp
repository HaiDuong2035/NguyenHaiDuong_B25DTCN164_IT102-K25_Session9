#include <stdio.h>
#include <math.h>
int main(){
	int num, count_even, count_odd=0;
	printf("Nhap so phan tu: ");
	scanf("%d",&num);
	int arr[num];
	for (int i=0; i<num; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Cac so chan trong mang la: ");
	for (int i=0; i<num; i++){
		if (arr[i]%2==0){
			printf("%d ",arr[i]);
			count_even++;
		} 
	}
	printf("\nCac so le trong mang la: ");
	for (int i=0; i<num; i++){
		if (arr[i]%2==1){
			printf("%d ",arr[i]);
			count_odd++;
		} 
	}
	printf("\nCo %d so chan va %d so le",count_even, count_odd);
    return 0;
}

