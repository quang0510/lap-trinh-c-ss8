#include<stdio.h>
int main(){
	
	int number[5]={1,3,4,5,7};
	int a;
	int count=0;
	printf("moi ban nhap 1 so bat ki ");
	scanf("%d", &a);
	for(int i=0;i<5;i++){
		if(a==number[i]){
			printf("phan tu co trong mang\n");
			printf("vi tri phan tu trong mang la %d ", i+1);
		    count++;
		    break;
		}
	}
	if(count==0){
		printf("phan tu khong co trong mang");
	}
	
	return 0;
}
