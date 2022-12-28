#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Top=-1, stack[SIZE];
void push();
void pop();
void display();
int main()
{
	int ch;
	while(ch!=0)
	{
		printf("\t 1.push the element \t 2.pop the element \t 3.display \t 4.end");
		printf("\n enter the choice");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
			default: printf("\n Invalid choice!!");
		}
	}
}
void push()
{
	int x;
	if (Top==SIZE-1)
	{
		printf("\n overflow");
	}
	else
	{
			printf("\n enter element to be inserted on to the stack:");
			scanf("%d", &x);
			Top=Top+1;
			stack[Top]=x;
	}
}
void pop()
{
	if(Top==-1)
	{
		printf("\n underflow");
	}
	else
	{
		printf("\n popped element: %d", stack[Top]);
		Top=Top-1;
	}
void display()
	{
		if (Top==-1)
		{
			printf("\n underflow");
		}
		else
		{
			printf("\n elements present in stack: \n");
			for (int i=Top; i>=0; --i)
				printf("%d\n", stack[i]);
		}
	}
}

