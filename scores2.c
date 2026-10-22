#include<stdio.h>
int main(){
	int scores[5];
	int sum=0;
	for(int i=0;i<5;i++){
		scanf("%d",&scores[i]);
	}
	for(int i=0;i<5;i++){
		sum=sum+scores[i];
	}
    printf("总分%d 平均分%.1f ",sum,sum/5.0);	
    int max=scores[0];
    for(int i=1;i<5;i++){
		if(scores[i]>max){
			max=scores[i];
		}
	}
	printf("最高分%d",max);
	return 0;
}
