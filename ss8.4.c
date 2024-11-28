#include<stdio.h>
int main(){
	
	int number[2][3]={{1,2,3},{5,6,7}};
	int max=number[1][1];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(max<number[i][j]){
				max=number[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la %d", max);
	
	
	return 0;
}
