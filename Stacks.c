#include<stdio.h>

int stack[100],i,top=-1,ele;

void push()
{
	if(top==99)
	{
		printf("Stack is overflow \n");
	}
	else
	{
		top++;
		printf("\nEnter an element to push : ");
		scanf("%d",&ele);
		stack[top] = ele;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack is underflow \n");
	}
	else
	{
		ele = stack[top];
		printf("Deleted element is : %d\n",ele);
		top--;
	}
}

void display()
{
	printf("Stack elements are : \n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1.Push 2.Pop 3.Display 4.Exit ");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: exit(0);
			default : printf("Invalid chlice!\n");
		}
	}
	return 0;
}
