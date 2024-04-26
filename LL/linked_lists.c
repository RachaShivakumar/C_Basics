#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};


void add_at_end(struct node *head, int data)
{
struct node *temp;
struct node *temp1;

temp = head;
while(temp->next != NULL){
   temp = temp->next;
   }
   temp1 = (struct node *)malloc(sizeof(struct node));
   temp1-> data = data;
   temp1->next = NULL;
   temp->next = temp1;
   head = temp; 
}

void print_list(struct node *head)
{
	struct node *temp;
	temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
		printf("%d\t",temp->data);
	}
	printf("\n");
}

void delatend(struct node *head)
{
struct node *temp;
struct node *temp1;
temp = head;
while(temp->next->next != NULL)
{
	temp = temp->next;
}
	temp->next = NULL;
}


void insertAtFront(struct node **head, int data)
{

struct node *temp;
temp =  (struct node *)malloc(sizeof(struct node));     
temp->next = *head;
temp->data = data;

*head = temp;

}



int main()
{

struct node *head;

head =  (struct node *)malloc(sizeof(struct node));

add_at_end(head,2);
print_list(head);
add_at_end(head,3);
print_list(head);
add_at_end(head,5);
print_list(head);
add_at_end(head,7);
print_list(head);
/*delatend(head);
print_list(head);
delatend(head);
print_list(head);
delatend(head);
print_list(head);*/
insertAtFront(&head,9);
print_list(head);
insertAtFront(&head,10);
print_list(head);
insertAtFront(&head,11);
print_list(head);
}

