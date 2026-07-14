#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void insert_start()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void insert_end()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void insert_middle()
{
    struct node *newnode, *temp;
    int pos, i = 1;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("\nEnter position: ");
    scanf("%d", &pos);

    if (head == NULL || pos == 1) // Insert at start if list is empty or pos==1
    {
        if (head != NULL)
            head->prev = newnode;
        newnode->next = head;
        head = newnode;
        return;
    }

    temp = head;
    while (i < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }

    // Insert at end if position is greater than length
    if (temp->next == NULL)
    {
        temp->next = newnode;
        newnode->prev = temp;
    }
    else
    {
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void delete_start()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
void delete_end()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
    }
}
void delete_middle()
{
    struct node *temp;
    int pos,i=1;
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nEnter position: ");
        scanf("%d",&pos);
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL");

        temp=head;
        printf("\nReverse order: ");
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->prev;
        }
        printf("NULL");

        
    }
}
int main()
{
    printf("\n1. Insert start");
    printf("\n2. Insert end");
    printf("\n3. Insert middle");
    printf("\n4. Delete start");
    printf("\n5. Delete end");
    printf("\n6. Delete middle");
    printf("\n7. Display");
    printf("\n8. Exit");
    int ch;
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert_start();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_middle();
                break;
            case 4:
                delete_start();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_middle();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("\nInvalid choice");
        }
    }while(ch!=8);

}