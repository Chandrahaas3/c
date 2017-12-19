#include <stdio.h>
#include<stdlib.h>
char a[100];
struct sll
{
	char data;
	struct sll *next;
}*head=NULL,*temp,*newn;
void create(char d)
{
	newn=(struct sll *)malloc(sizeof(struct sll));
	newn->data=d;
	newn->next=NULL;
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		temp=head;
		head=newn;
		head->next=temp;
	}
}
void print()
{
	int i=0;
	char b[100];
	temp=head;
	while(temp->next!=NULL)
	{
		b[i++]=temp->data;
		temp=temp->next;
	}
	b[i++]=temp->data;
	if(strcmp(a,b)==0)
	printf("Palindrome");
	else
	printf("Not palindrome");
}
void main()
{
	int i;

	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	create(a[i]);
	}
	print();
	return 0;
}
