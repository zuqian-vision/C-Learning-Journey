#include<stdio.h>
float getAverage(int arr[],int size){
	int sum=0;
	for (int i=0;i<size;i++){
		sum+=arr[i];
	}
	return (float)sum/size;
}
int getMax(int arr[],int size){
	int Max=arr[0];
	for(int i=1;i<size;i++){
		if (arr[i]>Max){
			Max=arr[i];
		}
	}
	return Max;
}
int main(){
	int scores[5]={85,92,78,60,95};
	float avg=getAverage(scores,5);
	int Max=getMax(scores,5);
	printf("%.1f %d",avg,Max);
	return 0;
}
