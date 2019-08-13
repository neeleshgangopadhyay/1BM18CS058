#include<stdio.h>

#define MAX_SIZE 10
int stack[MAX_SIZE];
int top=-1,t=1,f=0;
void push(int x)
{ 
    if(Isfull())
    { 
      printf("the stack is full/overflow");
    }
   else
    {
      stack[++top]=x;
    }
}
void pop()
{ 
  if(Isempty())
  {
    printf("the stack is underflow");
  }  
  else
  {
    top=top-1;
  }
}
int Isfull()
{  if(top==MAX_SIZE)
     return t;
   else
     return f;
}
int Isempty()
{  if(top==-1)
    return t;
   else
    return f;
 }
void display()
{  int j;
   for(j=0;j<=top;j++)
   { printf("%d \t",stack[j]);
   }
}
int topele()
{ return stack[top];
}
int main()
{  
  
  int num,ele,i; 
  printf("enter the number  elements in stacks\n");
  scanf("%d",&num);
  for( i=0;i<num;i++)
  { printf("\n enter the elements %d\t",i);
    scanf("%d",&ele);
    push(ele);
  }
  printf("\n the elements are\t");
  display();
  printf("\n enter the number  elements in stacks to be removed\n");
  scanf("%d",&num);
  for( i=0;i<num;i++)
  { 
    pop();
  }
  printf("\n the elements are\t");
  display();
  
  return 0;
} 

