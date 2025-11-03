#include <stdio.h>
#include <math.h>
int main(){
	int n, x, count;
	printf("Nhap so cac phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap gia tri x can tim: ");
	scanf("%d",&x);
	for (int i=0; i<n; i++){
		if (arr[i]==x){
			printf("Gia tri %d tai vi tri %d\n",x,i);
			count++;
		}
	}
	printf("Gia tri %d da xuat hien %d lan",x,count);
    return 0;
}
