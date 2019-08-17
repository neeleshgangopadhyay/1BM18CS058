#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 100
int top=-1,t=1,f=0;



struct student
   {
      char usn[8];
      char name[50];
      char eid[60];
      int year;






    }pupil[MAX_SIZE];


void push(struct student x)
  {
     if(Isfull())
     { printf("\n The no: of seats in auditorium are all full");



     }
     else
     {  top=top+1;
	pupil[top]=x;

     }
   }
void pop()
 { if(Isempty())
   { printf("\n Auditorium is empty no student to get out\t");
    }
   else
   { top=top-1;
   }
 }

void display()
{       int j;
	for(j=0;j<=top;j++)
	{    printf("\n the details of the students");
	 printf("\n Usn number:\t");
	 puts(pupil[j].usn);
	 printf("\n Name:\t");
	 puts(pupil[j].name);
	 printf("\n Email id :\t");
	 puts(pupil[j].eid);
	 printf("\n The year:\t");
	 printf("%d",pupil[j].year);
	}
}
int Isempty()
{  if(top==-1)
   return t;
   else
   return f;
}
int Isfull()
{  if(top==100)
   return t;
   else
   return f;
}
int main()
{ int num,i,j,n;

  struct student m;
  clrscr();
  printf("\n enter the numbers of students details to be entered:");
  scanf("%d",&num);
  printf("\n kindly fill up the details of the students");
  for(i=0;i<num;i++)
  {
	printf("\n Enter the usn number:\t");
	gets(m.usn);
	gets(m.usn);
	printf("\n Enter the name:\t");
	gets(m.name);
	printf("\n Enter the email id :\t");
	gets(m.eid);
	printf("\n Enter the year:\t");
	scanf("%d",&m.year);
	push(m);

  }


 display();
 printf("\n enter the number of students who left the auditorium:");
 scanf("%d",&j);
 for(n=0;n<j;n++)
 pop();
 display();
 getch();
 return 0;

}

