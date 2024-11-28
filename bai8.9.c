#include<stdio.h>
int main(){
	
	int number[]={1,3,2,6,3,3,8,3};
	int doDaiMang=sizeof(number)/sizeof(number[0]);
	int maxCount;
	int maxItem;
	for(int i=0;i<doDaiMang;i++){
		int count=0;
		for(int j=0;j<doDaiMang;j++){
			if(number[i]==number[j]){
				count++;
			}
		}
		if(count>maxCount){
			maxCount=count;
			maxItem=number[i];
		}
	}
	printf("phan tu %d xuat hien nhieu nhat voi %d lan ", maxItem, maxCount );
	
	return 0;
}
