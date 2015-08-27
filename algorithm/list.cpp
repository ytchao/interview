#include<iostream>

struct node{

 int value;
 node* next;
};


void insert(node** head,int value=0)
{
  if(*head==NULL)
  {
    *head=new node{value,NULL};
  }
}

void dump(node** head)
{
  while(*head!=NULL)
  {
    std::cout << (*head)->value << " ";
    *head=(*head)->next;
  }
}

int main()
{
  node* head;
  insert(&head,1);
  dump(&head);
}
