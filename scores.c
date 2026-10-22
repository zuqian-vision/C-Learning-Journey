#include<stdio.h>
int main(){
	int scores[5]={85,92,78,60,95};
	for(int i=0;i<5;i++){
		printf("%d.%d\n",i+1,scores[i]);
	}
	return 0;
} 
