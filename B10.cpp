#include <stdio.h>
#include <math.h>
int main(){
	int arr[]={1,5,2,3,23,5,1,2}, n=8, count[n], i, j, max;
	for (i=0; i<n; i++){
		count[i]=1;
		for (j=i+1; j<n; j++){
			if (arr[i]==arr[j]){
				count[i]++;
				count[j]=0;
			}
		}
	}
	for (i=0; i<n; i++){
		if (count[i]>max){
			max=count[i];
		}
	}
	printf("Phan tu xuat hien nhieu nhat la: ");
	for (i=0; i<n; i++){
		if (count[i]==max and max>1){
			printf("%d ", arr[i]);
		}
	}
    return 0;
}
