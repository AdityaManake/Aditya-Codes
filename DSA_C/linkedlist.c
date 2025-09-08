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
void reverse_ll();
void search();

struct node {
    int info;
    struct node *next;
};
struct node *start = NULL;

int main() {
    int choice;
    while(1) {
        printf("\n1. create\n");
        printf("2. display\n");
        printf("3. insert at begin\n");
        printf("4. insert at end\n");
        printf("5. insert at any position\n");
        printf("6. delete at given position\n");
        printf("7. delete all\n");
        printf("8. count elements\n");
        printf("9. reverse linked list\n");
        printf("10. search for an element\n");
        printf("11. exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert_begin(); break;
            case 4: insert_end(); break;
            case 5: insert_pos(); break;
            case 6: delete_pos(); break;
            case 7: delete_all(); break;
            case 8: count_elems(); break;
            case 9: reverse_ll(); break;
            case 10: search(); break;
            case 11: exit(0);
            default: printf("Incorrect choice.\n");
        }
    }
    return 0;
}

void create() {
    struct node *temp, *ptr;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if(start == NULL) {
        start = temp;
    } else {
        ptr = start;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
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

void insert_begin() {
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->info);
    temp->next = start;
    start = temp;
}

void insert_end() {
    struct node *temp, *ptr;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if(start == NULL) {
        start = temp;
    } else {
        ptr = start;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insert_pos() {
    struct node *temp,*ptr;
    int i,pos;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    printf("\nEnter position: ");
    scanf("%d",&pos);

    if(pos==1) {
        temp->next=start;
        start=temp;
        return;
    }

    ptr=start;
    for(i=1;i<pos-1 && ptr!=NULL;i++) {
        ptr=ptr->next;
    }
    if(ptr==NULL) {
        printf("Position not found\n");
        free(temp);
    } else {
        temp->next=ptr->next;
        ptr->next=temp;
    }
}

void delete_all() {
    struct node *temp;
    while(start!=NULL) {
        temp=start;
        start=start->next;
        free(temp);
    }
    printf("All values deleted!\n");
}

void delete_pos() {
    int i,pos;
    struct node *temp,*ptr;
    if(start==NULL) {
        printf("Empty list\n");
        return;
    }
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos==1) {
        temp=start;
        start=start->next;
        free(temp);
        return;
    }
    ptr=start;
    for(i=1;i<pos-1 && ptr!=NULL;i++) {
        ptr=ptr->next;
    }
    if(ptr==NULL || ptr->next==NULL) {
        printf("Position not found\n");
    } else {
        temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
        printf("Node deleted\n");
    }
}

int count_elems() {
    int count=0;
    struct node *ptr=start;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->next;
    }
    printf("Number of elements: %d\n",count);
    return count;
}

void reverse_ll() {
    int len=count_elems();
    if(len==0) return;
    int arr[len];
    struct node *ptr=start;
    for(int i=0;i<len;i++) {
        arr[i]=ptr->info;
        ptr=ptr->next;
    }
    printf("Reversed linked list: ");
    for(int i=len-1;i>=0;i--) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void search() {
    struct node *ptr;
    int key,pos=1,found=0;
    printf("Enter element to search: ");
    scanf("%d",&key);
    ptr=start;
    while(ptr!=NULL) {
        if(ptr->info==key) {
            printf("Element found at position %d\n",pos);
            found=1;
            break;
        }
        ptr=ptr->next;
        pos++;
    }
    if(!found) {
        printf("Element not found\n");
    }
}
