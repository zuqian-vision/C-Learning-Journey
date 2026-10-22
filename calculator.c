#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b;
	char x;
	int choice=1;
	while(choice!=0){
	scanf("%d %d", &a, &b);
	scanf(" %c", &x);
	if(x=='+')
	{printf("%d",a+b);}
	if(x=='-')
	{printf("%d",a-b);}
	if(x=='*')
	{printf("%d",a*b);}
	if(x=='/')
	{
		if(b==0)
		{printf("NO");}
		else
		{printf("%d",a/b);}}
		scanf("%d",&choice);}
	system("pause");
	return 0;
} 
