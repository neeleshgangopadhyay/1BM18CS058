#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
 int data;
 struct node* next;

}node;
node* head;
node* head1;
node* create_node(int t)
{

 node* temp=(node*)malloc(sizeof(struct node));
 temp->data=t;
 temp->next=NULL;
 return temp;
}
 void display(node * h)
{
   node * t=h;
   while(t!=NULL)
   {
      printf("\t%d",t->data);
      t=t->next;
    }

}
void pop(node * a)
{
  node* g=a;
  a=a->next;
  free(g);
}





 void insertS(int d)
{
   node*tem;
   tem=create_node(d);
   tem->next=head;
   head =tem;

}

void insertQ(int d)
{

 node* tem2;
 node*hea=head1;

 tem2=create_node(d);
 while(hea->next!=NULL)
 {

    hea=hea->next;


 }
  hea->next=tem2;
}
void main()
{
  int da;
  int ch;

   while(1)
  {   printf("\n Insert 1 for stack and 2 queue and 3 for display stack and 4 display in queue and 5 for exit and 6 for pop in stack and 7 for deletion in queue");
      scanf("%d",&ch);
      switch(ch)
     {

	case 1:   printf("\nenter the element to be inserted");
		  scanf("%d",&da);
		  insertS(da);
		  break;
	case 2:      printf("\nenter the element to be inserted");
		  scanf("%d",&da);
		  insertQ(da);
		  break;

	case 3:    display(head);
		    break;
	case 4:    display(head1);
		    break;

	case 5:     exit(0);
		    break;
	case 6:    pop(head);
		    break;
	 case 7:    pop(head1);
		    break;


     }



   }


  }








