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
return 0;
}
