#include<stdio.h>
#include<stdlib.h>
#define N 10
#define t 1
#define f 0
int isempty(int free)
{
  if(free==-1)
  return t;
  else
  return f;

}
int isfull(int fr,int re)
{
	if((fr==re+1)||(fr==0&&re==(N-1)))
		return t ;
	else
		return f;



}
void enqueue(int*x,int*fro,int*rea,int a[])
{
	if(isfull(*fro,*rea))
		printf("circular queue is full");
	else
	{
      if(*fro==-1)
		  *fro=0;
	  *rea=(*rea+1)%N;
	  a[*rea]=*x;
	}




}
void dequeue(int*fre,int*ree )
{
	if(isempty(*fre))
		printf("circular queue is empty");
	else
	{ if(*fre==*ree)
		{
			*fre=-1;
			*ree=-1;
			
			
			
		}
	  else
	    {

		  *fre=(*fre+1)%N;

	    }


	}

}
void display(int*frn,int*ren,int z[])
{

	int i;
	if(isempty(*frn))
	{
		printf("circular queue is empty");

	}
	else
	{
		printf("\n the elements are->");
		for(i=*frn;i!=*ren;i=(i+1)%N)
		{
			printf("element %d is:%d ",z[i]);

		}
		printf("element %d is:%d ",z[i]);

	}

}
void main()
{
	int ele,ch,cq[N],rear=-1,front=-1;


	while(1)
	{
		printf("\n CIRCULAR QUEUE\n enter your choice for operation ");
		printf("\n 1-Enter element ");
		printf("\n 2-Delete element ");
		printf("\n 3-Display elements ");
		printf("\n 4-Exit ");
		printf("\n choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n enter the element:");
				scanf("%d",&ele);
				 enqueue(&ele,&front,&rear,cq);
				 break;
			case 2: printf("\n The delete operation taking place");
				dequeue(&front,&rear);
				break;
			case 3: display(&front,&rear,cq);
				 break;
			case 4: exit(0);



		}





	}



	
	
	
	
}