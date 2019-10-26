#include<stdio.h>
#include<stdlib.h>
#define n 10
typedef struct node
{

  int data;
   struct node *next;



}node;

node * h1=NULL;
node * h2=NULL;



void insert(node* head)
{ 
   node*ptr=(node*)malloc(sizeof(struct node));
   int x;
   scanf("%d",&x);
   ptr->data=x;
   ptr->next=head;
   head=ptr;  
}
void display(node * he)
{ node*temp;
  temp=he;

  printf("\nthe list is :\t");
  while(temp!=NULL)
   {

     printf("\t %d",temp->data);
     temp=temp->next;
   } 
}
 void reverse(node*h)
 {
   node*cur=h;
   node * prev=NULL;
   node * nxt= NULL;
   while(cur!=NULL)
   {  nxt=cur->next;
      cur=prev;
      prev=cur;
      cur=nxt;
   }
   
   
}
 void concat(node* he1,node* he2)
{ 
  if(he1==NULL)
    display(he2);
  if(he2==NULL)
    display(he1);
  node * temp=he1;
   while(he1!=NULL)
    {
       he1=he1->next;


     } 
    he1->next=he2;
    display(he1);
}
void sorting(node * hd)
{ int t;
  node * cu=hd;
  node * index=NULL;
  if(cu==NULL)
  {
 
   printf("\nThe list is empty\n");

    
   }
  while(cu->next!=NULL)
  {  index=cu->next;
     while(index->next!=NULL)
      {
       if(cu->data>=index->data)
         { t=cu->data;
            cu->data=index->data;
           index->data=t;
          }  
        index=index->next;

       }
    
      cu=cu->next;
    }

 


}
  void main()
 {

   int dat,ch,po;
 while(1)
{ printf("\n Singly linked list\n");
  printf("\n  enter your choice for operation ");
  printf("\n 1-Enter element in list 1 ");
   printf("\n 2-Enter element in list 2 ");
   printf("\n 3-Display list 1 ");
  printf("\n 4-Display list 2");
   printf("\n 5-reverse  list 1 ");
    printf("\n 6- reverse list 2 ");
     printf("\n 7- sort list 1 ");
     printf("\n 8- sort list 2 ");
      printf("\n 9-concatenate list 1 ");
  printf("\n 5-Exit :\n CHOICE:");
  scanf("%d",&ch);
  switch(ch)
 { case 1:printf("\n enter the element list 1:");
	 insert(h1);
	  break;
   case 2:printf("\n enter the element in list 2:");
	 insert(h2);
	  break;
  
  case 3: printf("\nthe link list 1 is:");
          display(h1);
          break; 
    case 4: printf("\nthe link list 2 is:");
          display(h2);
          break; 
     case 5: printf("\n reversing the link list 1 is:");
          reverse(h1);
          break; 
     case 6: printf("\n reversing the link list 2 is:");
          reverse(h2);
          break; 
     case 7: printf("\n sorting the link list 1 is:");
          sorting(h1);
          break; 
     case 8: printf("\n sorting the link list 2 is:");
          sorting(h2);
          break; 
   case 9: printf("\n  the concating link list 1 and link list 2 is:");
          concat(h1,h2);
          break; 
    case 10 : exit(0);
            break;
  default:printf("\nthe wrong choice entered");
 }

}
 }












 














