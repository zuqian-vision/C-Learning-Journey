#include<stdio.h>
int main(){
	int sum;
	for(int i=1;i<=100;i++){
		if(i%2==0){
		sum=sum+i;}
	}
	printf("%d",sum);
	return 0;
}
