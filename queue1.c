#include<stdio.h>
#define SIZE 50
#define t 1
#define f 0
int isempty(int* a,int* b)
{ int c;
  if((*a==-1)&&(*b==-1))
     return t;
  else
     return f;
} 
int isfull(int* m)
{ if((*m==SIZE))
     return t;
  else
     return f;
} 
 int insert(int*s,int*d,int x,int z[])
{  int c;
   if(isfull(s))
   { printf("queue is full");
       return 0;
   }
   else if(isempty(s,d))
   { *s=0;
     *d=0;
   }
   else
   {    
    *s=*s+1;
   }

    c=*s;
   z[c]=x;
  return 1;
}
void delete(int*m,int*n)
{  
    if(isempty(m,n))
   { return ;
   }
   else if((*m)==(*n))
   {    
    *m=-1;
    *n=-1;
   }
  else
    *n=*n+1; 
}


  void main()
{int front=-1,rear=-1,a[SIZE],num,num2,i,j,x,g,h;
 printf("\n enter the number of element you want to enter");
 scanf("%d",&num);
 printf("\nenter the elements of queue\t");
 for(i=0;i<num;i++)
 {  scanf("%d",&x);  
    insert(&rear,&front,x,a);
 }
 printf("\n");
for(g=0;g<num;g++)
 {  printf("\n the element %d:%d",(g+1),a[g]);  
    
 }

 printf("\n enter the number of element you want to delete");
 scanf("%d",&num2);
 
 for(j=0;j<num2;j++)
 {    
    delete(&front,&rear);
 }
 printf("\n");
for(h=0;h<(num-num2);h++)
 {  printf("\n the element %d:%d",(h+1),a[h]);  
    } 

}
