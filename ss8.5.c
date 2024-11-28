#include<stdio.h>
int main(){
	
	int number[3][4]={{1,2,3,4},{6,7,8,9},{10,11,12,13}};
	int tong=0;
	for(int i=0;i<3;i++){
		tong+=number[i][3];
		tong+=number[i][0];
	}
	for(int j=0;j<4;j++){
		tong+=number[0][j];
		tong+=number[2][j];
	}
	tong-=number[0][0];
	tong-=number[0][3];
	tong-=number[2][3];
	tong-=number[2][0];
	printf("tong duong bien ma tran la %d", tong);
		
	return 0;
}
