#include<iostream>

struct node{

 int value;
 node* next;
};


void insert(node** head,int value=0)
{
  if(*head!=NULL && (*head)->value<value)
  {
     insert(&((*head)->next),value);
  }
  else
  {
    *head=new node{value,*head};
  }
  
}

void dump(node* head)
{
  while(head!=NULL)
  {
    std::cout << (head)->value << " ";
    head=(head)->next;
  }
}

int main()
{
  node* head=NULL;
  insert(&head,1);
  std::cout << head << std::endl;
  insert(&head,5);
  std::cout << head <<std::endl;
  insert(&head,3);
  dump(head);
}
