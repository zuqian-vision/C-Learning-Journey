#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Contact{
	char name[20];
	char phone[20];
};
int main(){
	int n;
	int count=0;
	scanf("%d",&n);
	struct Contact *p=(struct Contact*)malloc(n*sizeof(struct Contact));
	if(p==NULL){
		printf("Fail");
		return 1;
	}
	int choice;
	do{
		printf("动态通讯录\n");
		printf("1.添加联系人\n");
		printf("2.显示联系人\n");
		printf("0.退出");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(count==n){
					printf("空间已满");
					break;
				}
				else{
					scanf("%s %s",p[count].name,p[count].phone);
					printf("保存成功");
					count++;
						}
						break;
			case 2:
				if(count==0){
					printf("无联系人");
					break;
				}
				else{
					for(int i=0;i<count;i++){
						printf("%s %s",p[i].name,p[i].phone);
					}
				}
			case 0:
				printf("退出");
				break;
		}
	}while(choice!=0); 
	free(p);
	p=NULL;
	return 0;
	}
