#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* first = NULL;
struct node* last = NULL;

int count = 0,i;

void insert();
void deleteNode();
void display();

int main()
{
	char ch;
	while(1)
	{
	printf("1.Insert\n2.Delete\n3.Display");
	printf("Enter your choice\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 1: insert();break;
		case 2: deleteNode();break;
		case 3: display();break;
		case 4: exit(0);
		default : printf("Invalid choice\n");
	}
   	}
   	return 0;
}
void insert()
{
	int pos,x;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode = NULL)
	{
		printf("Memory allocation failed!\n");
		return;
	}
	printf("Enter position to insert(1-%d)",count+1);
	scanf("%d",&pos);
	printf("Enter data : ");
	scanf("%d",&x);
	
	newnode->data = x;
	newnode->next = NULL;
	
	if(pos<1 || pos>count+1)
	{
		printf("Invaild position!\n");
		free(newnode);
		return ;
	}
	
	if(pos == 1)
	{
		newnode->next = first;
		first = newnode;
	}
	else
	{
		struct node* temp = first;
		int i;
		for(i=1;i<pos-1;i++)
			temp = temp->next;
			
		newnode->next = temp->next;
		temp->next = newnode;
		
		if(pos == count+1)
			last = newnode;
	}
	count++;
}
