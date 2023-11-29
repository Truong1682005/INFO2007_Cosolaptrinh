#include <stdio.h>

int main(){
	int i,n;
	printf("Xin moi nhap vao so mang:");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Nhap vao vi tri thu arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	int j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				int tam = arr[i];
				arr[i] = arr[j];
				arr[j] = tam;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("Vi tri thu arr[%d] la %d\n",i, arr[i]);
	}
	return 0;
}
