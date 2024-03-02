#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node queue;
enum{ENQUEUE=1,DEQUEUE,EXIT};
queue *f=NULL,*r=NULL;

void enqueue(int e)
{
    queue *t=(queue*)malloc(sizeof(queue));
    t->data=e;
    t->next=NULL;
    if(f==NULL)
    {
        f=t;
        r=t;
    }
    else
    {
        r->next=t;
        r=t;
    }
}

void dequeue()
{
    if(f==NULL)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        printf("\n%d",f->data);
        f=f->next;
        if(f==NULL)
        {
            r=NULL;
        }
    }
}

int menu()
{
    int ch;
    printf("\n1.Enqueue\n2.Dequeue\n3.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}

void process()
{
    int ch;
    for(ch=menu();ch!=3;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("Enter the element to enqueue: ");
                    scanf("%d",&ch);
                    enqueue(ch);
                    break;
            
            case 2: dequeue();
                    break;
                    
            default:printf("Error: Invalid Choice");
                    break;
                    
        }
    }
}

int main()
{
    process();
    return 0;
}

