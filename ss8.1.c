#include<stdio.h>
int main(){
	
	int number[5]={1,2,4,6,9};
	for(int i=4;i>=0;i--){
		printf("number[%d]=%d\n", i, number[i]);
	}
	
	return 0;
}
