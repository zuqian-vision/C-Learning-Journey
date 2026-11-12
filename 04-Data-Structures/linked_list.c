#include<stdio.h>
#include<stdlib.h>
struct Node{
	int id;
	struct Node *next;
};
int main(){
	struct Node *head=NULL;
	struct Node *p1=(struct Node *)malloc(sizeof(struct Node));
	p1->id=1001;
	head=p1;
	struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
	p2->id=1002;
	p2->next=NULL;
	p1->next=p2;
	struct Node *current=head;
	while(current!=NULL){
		printf("Ñ§ºÅ£º%d\n",current->id);
		current=current->next;
	}
	return 0;
}
