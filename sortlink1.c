struct node
{
   int data;
   struct node*next;
};

 struct node *ptr;

 struct node* head=NULL;

int linksort()
{  struct node * current=head,*inde=NULL;
   int temp;
   if(head==NULL)
   { return 1;
    }
   else
   { 
       
       while(current!=NULL)
       {
          inde=current->next;
          while(inde!=NULL)
          { if(current->data>inde->data) 
             { temp=current->data;
                current->data=inde->data;
                inde->data=temp;
              }
             inde=inde->next;
           }
        current=current->next;
      }
    }
   return 0; 
  }                  
 

 

void create_node()
{
   ptr=(struct node*)malloc(sizeof(struct node));
}
void display()
{  int count=0;
   ptr=head;
   linksort();
   while(ptr!=NULL)
  { printf("%d  ",ptr->data);
    ptr=ptr->next;
    count++;
  }
   printf("\n the number of element is %d",count);
 }
 void InsertF(int x )
 {
   create_node();
   ptr->data=x;
   ptr->next=head;
   head=ptr;
 }
 int  InsertR(int y)
{ struct node * temp= head;

   create_node();
  ptr->data=y;
  if(head==NULL)
    { head=ptr;
      return(1);
    }


   while(temp->next!=NULL)
  {
    temp=temp->next;
  }


  temp->next=ptr;
  temp->next=ptr;
 
 return 0;

 }
int InsertP(int z,int pos)
{int i;
 create_node();
  ptr->data=z;

  if(head==NULL)
 { head=ptr;
   return 0;
 }
 if(pos==1)
 { ptr->next=head;
   head=ptr;
 }
 else
 { struct node*temp=head;
   for(i=1;i<pos;i++)
   {temp=temp->next;
   }
   ptr->next=temp->next;
  temp->next=ptr;
 return 0;
} 
 return 0;
}
  void main()
{int dat,ch,po;
 while(1)
{ printf("\n Singly linked list\n");
  printf("\n  enter your choice for operation ");
  printf("\n 1-Enter element ");
  printf("\n 4-Display ");
  printf("\n 5-Exit :\n CHOICE:");
  scanf("%d",&ch);
  switch(ch)
 { case 1:printf("\n enter the element:");
	  scanf("%d",&dat);
          InsertF(dat);
	  break;
  
  case 2: printf("\nthe link list is:");
          display();
          break; 
  case 3 : exit(0);
            break;
  default:printf("\nthe wrong choice entered");
 }
}
}
