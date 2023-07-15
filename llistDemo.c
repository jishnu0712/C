#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr; //next or link
};
int main()
{

	struct node* head=(struct node*)malloc(sizeof(struct node));
	struct node* n2=(struct node*)malloc(sizeof(struct node));
	struct node* n3=(struct node*)malloc(sizeof(struct node));
	
	//assigning values
	head->data = 45;
	head->ptr = n2;
	//head->d2 =5;
	n2->data=56;
	n2->ptr=n3;
	
	n3->data=65;
	n3->ptr=NULL;
	
	struct node* t=head;
	while(t)
	{
		printf("%d \n",t->data);
		t=t->ptr;
	}
}
