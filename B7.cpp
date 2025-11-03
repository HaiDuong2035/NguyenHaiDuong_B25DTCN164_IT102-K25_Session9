#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so cac phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int i=0, j=n-1;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for (int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
    return 0;
}
