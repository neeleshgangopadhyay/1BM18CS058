#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node* Node;
Node getnode()
{
    Node p;
    p=(Node)malloc(sizeof(struct node));
    return p;
}
Node insertfront(Node head,int e)
{
    Node p;
    p=getnode();
    p->data=e;
    p->next=head;
    head=p;
    return head;
}
void sort(Node head)
{
  if(head==NULL)
  printf("Empty List\n");
  else
  {
   Node p=head;
   Node q=NULL;
   while(p->next!=NULL)
   {
    q=p->next;
    while(q!=NULL)
    {
     if(p->data>q->data)
     {
      int t=p->data;
      p->data=q->data;
      q->data=t;
      }
     q=q->next;
     }
    p=p->next;
    }
 }
}
Node concat(Node head1,Node head2)
{
  if(head1==NULL)
  return head2;
  else if(head2==NULL)
  return head1;
  else
  {
   Node p=head1;
   while(p->next!=NULL)
   p=p->next;
   p->next=head2;
   return head1;
   }
}
Node rev(Node head)
{
 if(head==NULL)
 {
  printf("List is Empty\n");
  return head;
 }
 else if(head->next==NULL)
 return head;
 else
 {
 Node curr=head,prev=NULL,nextn=NULL;
 while(curr!=NULL)
 {
  nextn=curr->next;
  curr->next=prev;
  prev=curr;
  curr=nextn;
 }
 head=prev;
 return head;
 }
}
void show(Node head)
{
 if(head==NULL)
 {
  printf("List is Empty\n");
 }
 else
 {
  Node p=head;
  while(p!=NULL)
  {
   printf("%d ",p->data);
   p=p->next;
  }
 }
}
void main()
{
 int ch,ch1,e;
 Node h1=NULL;
 Node h2=NULL;
 do
 {
  printf("Enter 1 to insert front in list 1\nEnter 2 to insert front in list 2\nEnter 3 to reverse list 1\nEnter 4 to reverse list 2\nEnter 5 to sort list 1\nEnter 6 to sort list 2\nEnter 7 to concat list 1 and list 2\nEnter 8 to display list 1 and list 2\n");
  scanf("%d",&ch);
  if(ch==1)
  {
   printf("Enter a element\n");
   scanf("%d",&e);
   h1=insertfront(h1,e);
   }
  else if(ch==2)
  {
   printf("Enter a element\n");
   scanf("%d",&e);
   h2=insertfront(h2,e);
   }
   else if(ch==3)
   {
    h1=rev(h1);
    printf("List is reversed\n");
   }
    else if(ch==4)
   {
    h2=rev(h2);
    printf("List is reversed\n");
   }
   else if(ch==5)
   {
    sort(h1);
    printf("List is sorted\n");
   }
   else if(ch==6)
   {
    sort(h2);
    printf("List is sorted\n");
   }
   else if(ch==7)
   {
    h1=concat(h1,h2);
    printf("List 1 and 2 are concatenated\n");
   }
   else
   {
    printf("List 1-\n");
    show(h1);
    printf("\nList 2-\n");
    show(h2);
    printf("\n");
   }
   printf("Enter 1 to continue and 2 to exit\n");
   scanf("%d",&ch1);
  }while(ch1!=2);
}


