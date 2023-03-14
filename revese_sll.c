/* Reverse single linked list*/

#include<stdio.h>
#include<stdlib.h>

struct st{
    int data;
    struct st *link;
}*head=NULL;
void display(void);
void create(void);
void reverse(void);
int main()
{
 char ch;
 while(1)
 {
     printf("create a node : i\n");
     printf("diplay all data : p\n");
     printf("reverse link list : r\n");
     printf("Exit : q\n");
     
     printf("Enter a choice : ");
     scanf(" %c",&ch);
     
     switch(ch)
     {
         case 'i' :create();
                    break;
        case 'p' : display();
                    break;
        case 'r' : reverse();
                    break;
        case 'q' : return 0;
     }
     
 }
}

void create(void)
{
    struct st *temp=NULL,*newnode=NULL;
    int i,data,n;
    
    head=(struct st *)malloc(sizeof(struct st));
    if(head==NULL)
    {
        printf("Memory is not allocate\n");
        return;
    }
    
    printf("Enter a No. nodes : ");
    scanf("%d",&n);
    
    printf("Enter a data : ");
    scanf("%d",&data);
    
    head->data=data;
    head->link=NULL;
    
    temp=head;
    
    for(i=2;i<=n;i++)
    {
        newnode=(struct st *)malloc(sizeof(struct st));
        
        printf("Enter a data : ");
        scanf("%d",&data);
        
        newnode->data=data;
        newnode->link=NULL;
        
        temp->link=newnode;
        temp=temp->link;
        
    }
}

void display(void)
{
    struct st *temp=NULL;
    if(head==NULL)
    {
        printf("struct is Empty\n");
        return;
    }
    
    temp=head;
    while(temp)
    {
        printf("Data is %d\n",temp->data);
        temp=temp->link;
    }
}

void reverse(void)
{
    struct st *prev=NULL,*next=NULL,*current=NULL;
    current=head;
    while(current)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

