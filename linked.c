#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node* next;
};

struct node* getNode();
void travarse(struct node*);
struct node* insertAny(struct node*);
struct node* insertLast(struct node*);
//declarations


struct node* getNode()
{
	struct node* t = (struct node*)malloc(sizeof(struct node));//new node
	t->next = NULL;
	
	printf("Enter data");
	scanf("%d",&t->data); // user data input

	return t; //returning address of newly craeted node
}

void travarse(struct node* head)
{
	if(head==NULL)
	{printf("List empty\n");}
	else
	{	struct node* t=head;
		while(t!=NULL)
		{
			printf("%d  ",t->data);
			t=t->next;
		}
	}
}

struct node* insertFirst(struct node* head)
{
	struct node* n = getNode();
	if(head==NULL)
	{	return n;	}
	//join head at last of n
	n->next = head;
	return n;
}

struct node* insertAny(struct node* head)
{
	if(head==NULL)
	{
		return insertFirst(head);
	}
	int pos;
	printf("Enter position");
	scanf("%d",&pos);
	
	if(pos>0)
	{
		struct node* t = head;
		while(t!=NULL && pos>1)
		{	t=t->next; pos--;	}
		if(t==NULL)
		{printf("Entered position exceeds linked list length\n");}
		else
		{
			struct node* n = getNode();
			n->next = t->next;
			t->next=n;
		}
	}
	else if(pos==0)
	{	head = insertFirst(head);}
	else{printf("Enter position > 0");}
	return head;
}

struct node* insertLast(struct node* head)
{
	if(head==NULL)
	{	return insertFirst(head);	}
	
	struct node* t = head;
	while(t->next!=NULL)
	{t=t->next;}
	
	//create new node
	struct node* n = getNode();
	t->next = n;
	return head;
}

struct node* deleteFirst(struct node* head)
{
	if(head != NULL)
	{	struct node* t = head;
		head = head->next;
		free(t);
	}
	else
	{	printf("List Empty. Deletion Impossible"); }
	return head;
}

struct node* deleteLast(struct node* head)
{
	if(head!=NULL)
	{
		struct node* t=head;
		if(t->next==NULL) //only 1 node
		{free(t); return NULL;}
		while(t->next->next != NULL)
		{t=t->next;}
		struct node* del = t->next;
		t->next=NULL;
		free(del);
	}
	else
	{printf("Deletion impossible\n");}
	return head;
	
}

struct node* deleteAny(struct node* head)
{
	if(head==NULL)
	{
		printf("deletion not possible\n");
		return NULL;
	}
	int pos;
	printf("Enter position");
	scanf("%d",&pos);
	
	struct node* t = head;
	
	if(pos>0)
	{
		if(t->next==NULL)
		{
			return deleteFirst(t);
		}
		else
		{
			while(t->next->next!=NULL && pos>0)
			{	t=t->next; pos--;	}
			if(pos>1)
			{printf("Entered position exceeds linked list length\n");}
			else
			{//deletion process
				struct node* del = t->next;
				t->next=t->next->next;
				free(del);
			}
		}
	}
	else if(pos==0)
	{	head = deleteFirst(head);}
	else{printf("Enter position > 0");}
	return head;
}
int main()
{
	struct node* head = NULL;
		
	int ch;
	while(1)
	{
		printf("\n1:Display\n2:Insert Last\n3:Insert Any\n4:Insert First\n");
		printf("5:DeleteFirst\n6:DeleteLast\n7:deleteAny\n0:Exit\n");
		scanf("%d",&ch); //never leave extra space after scanf
		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				travarse(head);
				break;
			case 2:
				head=insertLast(head);
				travarse(head);
				break;
			case 3:
				head=insertAny(head);
				travarse(head);
				break;
			case 4:
				head = insertFirst(head);
				travarse(head);
				break;
			case 5:
				head=deleteFirst(head);
				travarse(head);
				break;
			case 6:
				head=deleteLast(head);
				travarse(head);
				break;
			case 7:
				head=deleteAny(head);
				travarse(head);
				break;
			default:
				printf("Wrong choice");
		}
	}	
	return 0;
}
