#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
};

void reverse(struct node** head)
{
  struct node *prev = NULL;
  struct node *current = *head;
  struct node *next = NULL;
  while (current != NULL)
  {
    next = current->next;
    current->next=prev;
    prev=current ;
    current = next;
  }
  *head = prev;
}

void recursiveReverse(struct node **head)
{
  struct node *first;
  struct node *rest;
  if(*head == NULL) return;
  first = *head;
  rest = first->next;
  if(rest == NULL) return;
  recursiveReverse(&rest);
  first->next->next = first;
  first->next = NULL;
  *head = rest;
}

void traverse(struct node *head){

  struct node *tmp_head = head;

  while(tmp_head != NULL){
    printf("%d\t", tmp_head->data);
    tmp_head = tmp_head->next;
  }
  printf("\n");
}

void push(struct node **head, int data){

  struct node *tmp = (struct node*)malloc(sizeof(struct node));

  tmp->data = data;

  if(*head != NULL)
    tmp->next = *head;
  else
    tmp->next = NULL;

    *head = tmp;
}

int main(){
  struct node* head;
  head = NULL;

  push(&head, 10);
  push(&head, 11);
  push(&head, 12);
  push(&head, 13);
  push(&head, 14);

  traverse(head);
  // recursiveReverse(&head);
  traverse(head);
}
