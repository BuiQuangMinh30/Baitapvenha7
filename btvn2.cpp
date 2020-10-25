#include<stdio.h>
int main()
{
	int n,i;
	printf("Nhap n: ");scanf("%d",&n);
	int flag=0,k;
	int arr[n];
	for(i=0;i<n;i++){
		do{
		printf("\nArr[%d] = ",i);scanf("%d",&arr[i]);
//		int tmp;
//		int j,k;
//		for(j=0;j<=i;j++){
//			for(k=0;k<=j-1;k++){
//				if(arr[k]>arr[k+1]){
//					tmp=arr[k+1];
//					arr[k+1]=arr[k];
//					arr[k]=tmp;
//				}
//			}
//		}
		//kiem tra xem arr vua nhap có nawnfm trong mang tu 0 ->i-1
		for(k=0;k<i;k++){
			if(arr[k]==arr[i]){
				flag =1;
				break;
			}
		}
	}
	while(flag=0);
		printf("\nMang vua nhap!");
		int a=arr[i];
		for(k=0;k<=i;k++){
			if(arr[k]==arr[k-1]){
			printf("\nDa bi trung so");
		}
		else{
			printf("%5d",arr[k]);
		}
	}
  }
}


