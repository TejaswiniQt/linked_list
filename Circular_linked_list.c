/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct node
{
    char ch;
    struct node *next;
};


int main()
{
    struct node *head=NULL,*newnode,*temp;
    int data;           
    char choice='y';

    while(choice=='y')
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter character: \n");
    __fpurge(stdin); 
    scanf("%c",&newnode->ch);
    newnode->next=NULL;
    if(head==NULL)
    {
    head=newnode;
    temp=newnode;
    }
    else
    {
       temp->next=newnode; 
       temp=newnode;
    } 
    temp->next=head;
	
	printf("Do you want to continue press y else press n: ");
	__fpurge(stdin);  
	scanf("%c",&choice);
    }
    
    temp=head;
    
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    printf("List contains\n");
   while(temp->next!=head)
   {
       printf("%c ",temp->ch);
       temp=temp->next;
   }
   printf("%c ",temp->ch);
   printf("\n");
    return 0;
}

