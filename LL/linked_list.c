#include<stdio.h>
#include<stdlib.h>

struct node {
      int data;
      struct node *next;	
};


void addatend(struct node *point, int data)
{
struct node *temp  = NULL;
struct node *temp1 = NULL;

temp = point;

while(temp -> next != NULL)
	temp = temp->next;
temp1 = (struct node *)malloc(sizeof(struct node));
temp1->data = data;
temp1->next = NULL;
temp->next = temp1;
	
}

void print_list(struct node *temp)
{
	struct node *head = NULL;
	head = temp;
	printf("%d\t",head-> data);
	while(head-> next != NULL)
	{
	    head = head->next;
		printf("%d\t",head-> data);
	}
}


int main()
{
	struct node *head;
	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 10;
	head -> next = NULL;

	addatend(head,1);
	print_list(head);
	printf("\n");
	addatend(head,2);
	print_list(head);
	printf("\n");

	addatend(head,3);
	print_list(head);
printf("\n");
	return 0;
}