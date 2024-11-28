#include<stdio.h>
int main(){
	
	int number[4][4]={{1,2,3,4},{7,8,9,10},{12,14,16,18},{13,15,17,19}};
	int tong=0;
	for(int i=0;i<4;i++){
		printf(" cac phan tu cua duong cheo chinh la %d \n ", number[i][i]);
		tong+=number[i][i];
	}
	printf("tong cac phan tu cua duong cheo chinh la %d ", tong);
	
	return 0;
}
