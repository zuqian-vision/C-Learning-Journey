#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Contact{
	char name[20];
	char phone[20];
};
int main(){
	int n=3;
	struct Contact *p=(struct Contact*)malloc(n*sizeof(struct Contact));
	if (p==NULL){
		printf("Fail");
		return 1;
	}
	for(int i=0;i<n;i++){
		scanf("%s %s",p[i].name,p[i].phone);
	}
	for(int i=0;i<n;i++){
		printf("%s %s\n",p[i].name,p[i].phone);
	}
	free(p);
	p=NULL;
	return 0;
}
