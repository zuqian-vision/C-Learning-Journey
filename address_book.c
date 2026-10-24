#include<stdio.h>
#include<string.h>
struct Contact{
	char name[20];
	char phone_number[20];
};
int main(){
	struct Contact book[3];
	for(int i=0;i<3;i++){
		scanf("%s",book[i].name);
		scanf("%s",book[i].phone_number);
		printf("%s %s",book[i].name,book[i].phone_number);
	}
	return 0;
}
