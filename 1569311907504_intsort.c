#include<stdio.h>
#include<stdlib.h>

typedef struct List
{
        int data;
        struct List *next;
}list;

list *temp;
list *head=0;

void insert(int item)
{       
        int i,pos=1;
                list *prt;
                prt=head;
                temp=(list*)malloc(sizeof(list));
                temp->data=item;       
                while(prt!=0)
                {
                        if(prt->data <= temp->data)
                                break;
                        pos++;
                        prt=prt->next;
                }                       
                if(pos==1)
                {
                        temp->next=head;
                        head=temp;
                }
                else
                {
                        prt=head;
                        for(i=1;i<pos-1;i++)
                        {
                                prt=prt->next;
                        }
                        temp->next=prt->next;
                        prt->next=temp;
                }
}

void display()
{
        temp=head;
        if(temp==0)
        {
                printf("\nlist is empty");
                return;
        }
        else
        {
                while(temp!=0)
                {
                        printf("\n%d",temp->data);
                        temp=temp->next;
                }
        }
}

int main()
{

        int item,n;
        while(1)
        {
                printf("\n\nchoose an operation :");
                printf("\n1.insert\n2.display\n3.exit\n\nchoice :");
                scanf("%d",&n);
                switch(n)
                {
                        case 1: printf("\nenter an element :");
                                scanf("%d",&item);
                                insert(item);
                                break;

                        case 2: display();
                                break;

                        case 3: exit(0);

                        default: printf("\nINVALID INPUT");
                }
        }
        return 0;
}


