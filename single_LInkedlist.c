#include<stdio.h>
#include<stdlib.h>

void insert();
void deleteNode();
void display();

struct node
{
	int data;
	struct node* next;
};
struct node* first = NULL;
struct node* last = NULL;
int count =0,i;

int main()
{
	int ch;
	while(1)
	{
	printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: insert();break;
		case 2: deleteNode();break;
		case 3: display();break;
		case 4: exit(0);
		default: printf("Invalid choice!\n");
	}
	}
	return 0;
}

void insert()
{
	int pos,x;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory allocation failed!\n");
		return;
	}
	printf("Enter position (1-%d) : ",count+1);
	scanf("%d",&pos);
	printf("Enter data : ");
	scanf("%d",&x);
	
	newnode->data =x;
	newnode->next = NULL;
	
	if(pos<1 || pos>count+1){
		printf("Invalid position!\n");
		free(newnode);
		return;
	}
	
	if(pos ==1){
		newnode->next=first;
		first = newnode;
	}
	else{
		struct node* temp = first;
		int i;
		for(i=1;i<pos-1;i++)
		{
			temp = temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		if(pos == count+1)
		{
			last = newnode;
		}
	}
	count++;
}
void deleteNode()
{
	int pos;
	if(first==NULL)
	{
		printf("List is empty!\n");
		return;
	}
	printf("Enter position to delete (1-%d) :",count);
	scanf("%d",&pos);
	
	if(pos<1 || pos>count){
		printf("Invalid position!\n");
		return;
	}
	struct node* temp = first;
	
	if(pos == 1)
	{
		first = first->next;
		free(temp);
	}
	else
	{
		struct node* prev = NULL;
		for(i=1;i<pos;i++)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		if(pos==count)
		{
			last = prev;
		}
		free(temp);
	}
	count--;
}
void display()
{
	if(first==NULL)
	{
		printf("List is empty!\n");
		return;
	}
	struct node* temp = first;
	printf("Linked list is :");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
