#include<stdio.h>
int main()
{
	int n,i;
	printf("Nhap n: \n");scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Arr[%d]= ",i);scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x: ");scanf("%d",&x);
	
	int dem=0;
	int j,min;
	for(i=0;i<n;i++){
		if(arr[i]<x){
		    min=arr[i];
		    break;
		}
	}
	if(min==x){
		printf("Khong co so nho hon so vua chon.");
	}
	else{
		for(i=0;i<x;i++){
			if(arr[i]>min && arr[i]<x){
				min=arr[i];
			}
		}
	}
	printf("Bien gan x nhat la : %d",min);
}
