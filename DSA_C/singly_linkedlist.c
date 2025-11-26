#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_all();
void delete_pos();
int count_elems();
void search();
void reverse_ll();
struct node{
    int info;
    struct node *next;
};
struct node *start=NULL;
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
    struct node *temp,*ptr;
    int len;
    printf("Enter no. of elements :");
    scanf("%d",&len);
    for(int i = 0; i < len; i++)
    {
        temp=(struct node*) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&temp->info);
        temp->next=NULL;
        ptr=start;
        if(start==NULL)
        {
            start = temp;
        }
        else
        {
            while(ptr->next !=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
        ptr=temp;
    }
}
void display() {
    struct node *ptr;
    if(start == NULL) {
        printf("\nEmpty list\n");
        return;
    }
    ptr = start;
    printf("\nList elements: ");
    while(ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
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
    start=temp;
}
void insert_end()
{
    struct node *temp,*ptr;
    temp=(struct node*) malloc (sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!= NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void insert_pos()
{
    int pos;
    struct node *temp,*ptr;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos==1)
    {
        temp->next=start;
        start=temp;
        return;
    }
    ptr=start;
    for(int i=1;i<pos-1 && ptr!=NULL;i++)
    {
        if(ptr==NULL)
        {
            printf("Position not found!");
        }
        else
        {
            temp->next=ptr->next;
            ptr->next=temp;
        }
    }
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
void delete_pos()
{
    struct node *temp,*ptr;
    int pos;
    if(start==NULL)
    {
        printf("Empty list!\n");
    }
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos==1)
    {
        temp=start;
        start=start->next;
        free(temp);
        return;
    }
    ptr=start;
    for(int i=1;i<-pos && ptr!=NULL; i++)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL || ptr->next==NULL)
    {
        printf("Position not found!\n");
    }
    else
    {
        temp=ptr->next;
        ptr->next=temp->next;
        printf("Node deleted!\n");
        free(temp);
    }
}
int count_elems()
{
    struct node *ptr;
    int count=0;
    ptr=start;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    printf("Total numbers of elements in the list:%d\n",count);
    return count;
}
void search()
{
    struct node *ptr;
    int key,found,pos=1;
    printf("Enter the element to search:");
    scanf("%d",&key);
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->info==key)
        {
            printf("Element %d found at index %d\n",ptr->info,pos);
            found=1;
            break;
        }
        ptr=ptr->next;
        pos++;
    }
    if(found==0)
    {
        printf("Element %d not in the list!\n",key);
    }
}
void reverse_ll()
{
    struct node *ptr;
    ptr=start;
    int len=count_elems();
    int arr[len];
    if(len==0)
    {
        return;
    }
    for(int i=0;i<len;i++)
    {
        arr[i]=ptr->info;
        ptr=ptr->next;
    }
    printf("Revesed linked list:\n");
    for(int i=len-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}