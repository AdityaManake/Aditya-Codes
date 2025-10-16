#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *left;
    struct node *right;
};
void inOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d ",root->item);
    inOrder(root->right);
}
void preOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ",root->item);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->item);
}
struct node *createNode(int item)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=item;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insertLeft(struct node *root, int item)
{
    root->left=createNode(item);
    return root->left;
}
struct node *insertRight(struct node *root, int item)
{
    struct node *newnode=createNode(item);
    return root->right;
}
int main()
{
    struct node *root=createNode(1);
    insertLeft(root,2);
    insertRight(root,3);    
    insertLeft(root->left,4);
    printf("Inorder traversal: ");
    inOrder(root);
    printf("\nPreorder traversal: ");
    preOrder(root);
    printf("\nPostorder traversal: ");
    postOrder(root);
}