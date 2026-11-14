#include<stdio.h>
#include<stdlib.h>
struct Node{
	int id;
	struct Node *next;
};

int main(){
	struct Node *head=NULL;
	struct Node *tail=NULL;
	int n,input_id;
	printf("你想创建多少个节点："); 
	scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("输入第%d个节点的ID:",i+1);
	scanf("%d",&input_id);
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->id=input_id;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		tail=newNode;
	}
	else{
		tail->next=newNode;
		tail=newNode;
	}
}
struct Node *current=head;
while(current!=NULL){
	printf("ID:%d\n",current->id);
	current=current->next; 
}
int target_id;
printf("输入要查找的学号:");
scanf("%d",&target_id);
struct Node *temp=head;
int is_found=0;
while(temp!=NULL){
	if(temp->id==target_id){
		is_found=1;
		printf("%d",temp->id);
		break;
	}
	temp=temp->next;
}
if(is_found==0){
	printf("无");
}
int found_id;
printf("输入要删除的id:");
scanf("%d",&found_id);
struct Node *num=head;
struct Node *prev=NULL;
while(num!=NULL){
	if(found_id!=num->id){
		prev=num;
		num=num->next;
	}
	else{
		if(prev==NULL){
			head=num->next;
			free(num);
			break;
		}
		else if(prev!=NULL){
			prev->next=num->next;
			free(num);
			break;
		}
	}
	num=num->next;
}
if(num==NULL){
	printf("无");
	}
return 0;
}
