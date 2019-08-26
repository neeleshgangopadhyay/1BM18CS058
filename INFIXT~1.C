#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define SIZE 15
int top=-1;
char exp[15];
char st[15];
char res[15];
void push(char x)
{  if(isfull())
     printf("\n the stack is full");
   else
     st[++top]=x;
}
void pop()
{  if(isempty())
    printf("\n the stack is underflow");
   else
     top--;
}
char te()
{  return st[top];
}
int isfull()
{ if(top==SIZE)
    return 1;
  else
    return 0;
}
int isempty()
{ if(top==-1)
   return 1;
  else
   return 0;
}
void inftopost()
{ int i,m=0;
  for(i=0;exp[i]!='\0';i++)
  {
   if(isalnum(exp[i]))
   push(exp[i]);
   else if(exp[i]=="("||exp[i]=="+"||exp[i]=="-"||exp[i]=="*'||exp[i]=="/'||exp[i]==")")
    {  if(exp[i]=="+"||exp[i]=="-"||exp[i]=="*"||exp[i]=="/")
	    { 	if(prec(exp[i])>prec(exp[i]))
		push(exp[i]);
		else if(prec(exp[i])<prec(exp[i]))
		{ res[m++]=exp[i];
		  pop();
		}
	    }
       if(exp[i]=="(")
	{ push(exp[i]);}
       else if(exp[i]==")")
	{ for(;st[top]!="(";)
	    {  res[++m]=st[top];
	       pop();
	    }

	}
    }
 }
}
int prec(char a)
  {   switch(a)
     { case '+':
       case '-':{ return 1;

		}
       case '/':
       case '*':{ return 2;

		}
       default: return 0;
      }
     return 0;
  }
 void enterexp()
{  int j,num;
   printf("\n enter the number of elements to be entered");
   scanf("%d",&num);
   getline(exp);
}
 void displayexp()
{  int k;
   printf("\n");
   for(k=0;exp[k]!="\0";k++)
   {
	   printf("the expression in postfix is:%s",res);
   }
}
void main()
{ printf("\n enter the infix expression(max. of 12)");

  enterexp();
  inftopost();
  displayexp();
}



