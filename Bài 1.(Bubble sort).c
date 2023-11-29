#include <stdio.h>

int nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nNhap phan tu thu a[%d]=",i);
	    scanf("%d", &a[i]); 
	}
}

int hienThi(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("%3d", arr[i]);
	}
} 

int buble_sort(int arr[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]> arr[j]){
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
    }
}
int main(){
	int a[100],n;
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	nhap(a,n);
	printf("\nDay so ban vua nhap la: ");
    hienThi(a,n);
    printf("\nDay sau khi sap xep la: ");
    buble_sort(a,n);
    hienThi(a,n);
    return 0;
}
