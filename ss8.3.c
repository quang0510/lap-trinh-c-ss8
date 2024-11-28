#include<stdio.h>
int main(){
	
	int a;
	printf("moi ban nhap ");
	scanf("%d", &a);
	int number[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("moi ban nhap phan tu hang %d cot %d : ", i+1, j+1);
			scanf("%d", &number[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("%d\t", number[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
