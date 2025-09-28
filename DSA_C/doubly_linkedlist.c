#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *start=NULL;
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_all();
void delete_pos();
int count_elems();
int main()
{
    int choice;
    printf("Enter '1' to create:\n");
    printf("Enter '2' to Display:\n");
    printf("Enter '3' to Insert at the beginning:\n");
    printf("Enter '4' to Insert at the end:\n");
    printf("Enter '5' to Insert at a position:\n");
    printf("Enter '6' to Delete all elements:\n");
    printf("Enter '7' to Delete at a position:\n");
    printf("Enter '8' to Count the number of elements:\n");
    printf("Enter '9' to search for an element:\n");
    printf("Enter '10' to reverse the linked-list:\n");
    printf("Enter '11' to exit:\n");
    while(1){
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: create();
                break;
        case 2: display();
                break;
        case 3: insert_begin();
                break;
        case 4: insert_end();
                break;
       case 5: insert_pos();
                break;
        case 6: delete_all();
                break;
        case 7: delete_pos();
                break;
        case 8: count_elems();
                break;
        case 9: search();
                break;
        case 10: reverse_ll();
                break;
        case 11: exit(0);
        default: printf("\nInvalid input!");
    }
 }
    return 0;
}
void create()
{
    struct node *ptr,*temp;
    int len;
    printf("Enter number of elements:");
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    {
        temp=(struct node*) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &temp->info);
        temp->prev = temp->next = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->prev = ptr;
        }
    }
}
void display()
{
    struct node *ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("Empty list!\n");
        return;
    }
    printf("List elements:\n");
    while (ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}
void insert_begin()
{
    struct node *temp;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&temp->info);
    temp->next=start;
    temp->prev=NULL;
    if(start!=NULL)
    {
    start->prev=temp;
    }
    start=temp;
}
void insert_end()
{
    struct node *temp,*ptr;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&temp->info);
    temp->next = temp->prev = NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
    }
}
void insert_pos()
{
    struct node *ptr,*temp;
    int pos;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&temp->info);
    temp->next=temp->prev=NULL;
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos==1)
    {
        insert_begin();
        return;
    }
        ptr=start;
        for(int i=1;i<pos-1 && ptr!=NULL; i++)
        {
            ptr=ptr->next;
        }
        if(ptr == NULL)
        {
            printf("Position not found!\n");
            return;
        }
        temp->next=ptr->next;
        temp->prev=ptr;
        if(ptr->next !=NULL)
        {
            ptr->next->prev=temp;
        }
        ptr->next=temp;
}
void delete_all()
{
    struct node *temp;
    while(start!=NULL)
    {
        temp=start;
        start=start->next;
        free(temp);
    }
    printf("All values deleted!\n");
}
void delete_pos() {
    int pos;
    if (start == NULL) {
        printf("Empty list!\n");
        return;
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    struct node *ptr = start;
    for (int i = 1; i < pos && ptr != NULL; i++)
        ptr = ptr->next;
    if (ptr == NULL) {
        printf("Position not found!\n");
        return;
    }
    if (ptr->prev != NULL)
        ptr->prev->next = ptr->next;
    else
        start = ptr->next;
    if (ptr->next != NULL)
        ptr->next->prev = ptr->prev;
    free(ptr);
    printf("Node deleted!\n");
}
int count_elems()
{
    struct node *ptr;
    int count=0;
    ptr=start;
    if(start==NULL)
    {
        printf("Empty list!\n");
        return;
    }
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    printf("Total number of elements in the list:%d\n",count);
    return count;
}
void search()
{
    int pos=1,found=0,key;
    struct node *ptr;
    printf("Enter element to search:");
    scanf("%d",&key);
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->info==key)
        {
            printf("Element %d found at index %d\n",key,pos);
            found=1;
            break;
        }
        ptr=ptr->next;
        pos++
    }
    if(found==0)
    {
        printf("Element %d not in the list!\n",key);
    }
}
void reverse_ll() {
    struct node *ptr = start;
    if (ptr == NULL) return;
    while (ptr->next != NULL)
        ptr = ptr->next;
    printf("Reversed linked list: ");
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->prev;
    }
    printf("\n");
}
