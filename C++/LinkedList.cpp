#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

Node* head = NULL;

void insert_back(int new_data)
{
  // Node *new_node = (Node*) malloc(sizeof(Node));
  Node *new_node = new Node;
  new_node->data = new_data;
  if(head == NULL)
  {
    head = new_node;
    new_node->next = NULL;
  }
  else
  {
    Node *curr = new Node;
    curr = head;
    while(curr->next != NULL){curr = curr->next;}
    curr->next = new_node;
    new_node->next = NULL;
  }
  // delete new_node;
}

void insert_front(int new_data)
{
  // Node *new_node = (Node*) malloc(sizeof(Node));
  Node *new_node = new Node;
  new_node->data = new_data;
  if(head == NULL)
  {
    head = new_node;
    new_node->next = NULL;
  }
  else
  {
    new_node->next = head;
    head = new_node;
  }
  // delete new_node;
}

void insert_at_pos(int new_data, int pos)
{
  // Node *new_node = (Node*) malloc(sizeof(Node));
  Node *new_node = new Node;
  new_node->data = new_data;
  if(head == NULL)
  {
    head = new_node;
    new_node->next = NULL;
  }
  else if(pos==0)
  {
    new_node->next = head;
    head=new_node;
  }
  else
  {
    Node *curr = new Node;
    curr = head;
    while((pos-1)>0){curr = curr->next;pos--;}
    new_node->next = curr->next;
    curr->next = new_node;
  }
  // delete new_node;
}

void display()
{
  if(head == NULL)
  {
    cout<<"Empty"<<endl;
    return;
  }
  else
  {
    Node *temp = head;
    while(temp != NULL)
    {
      cout<<temp->data<<" ";
      temp = temp->next;
    }
  }
  cout<<endl;
}

void delete_at_pos(int pos)
{
  if(head == NULL)
  {
    cout<<"Empty List"<<endl;
    return;
  }
  Node *prev;
  Node *curr;
  if(pos == 0)
  {
    Node *temp = head->next;
    head = temp;
  }
  else
  {
    prev = head;
    curr = head->next;
    while((pos-1)>0)
    {
      prev = prev->next;
      curr = curr->next;
      pos--;
    }
    prev->next = curr->next;
  }
}

void delete_last()
{
  if(head == NULL)
  {
    cout<<"Empty List"<<endl;
    return;
  }
  else if(head->next == NULL)
  {
    head = NULL;
    return;
  }
  else
  {
    Node *prev;
    Node *curr;
    prev = head;
    curr = head->next;
    while(curr->next != NULL)
    {
      curr = curr->next;
      prev = prev->next;
    }
    prev->next = NULL;
  }
}

void freeList()
{
  Node *temp;
  while(head!=NULL)
  {
    temp=head;
    head = head->next;
    free(temp);
  }
}

int main()
{
  insert_back(1);
  insert_back(2);
  insert_back(3);
  insert_back(4);
  insert_back(5);
  insert_back(6);
  insert_back(7);
  insert_back(8);
  insert_back(9);
  display();
  delete_last();
  delete_at_pos(0);
  display();
  freeList();

  cout<<"Done"<<endl;
  return 0;
}
