#include<stdio.h>
#include<stdlib.h>


struct Node *insert(struct Node*node,int key);
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *addLeaf(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->left = NULL;
    node->right = NULL;
    node->data = key;
    return node;
};

struct Node *insert(struct Node*node,int key)
{
    if(node == NULL)
        return addLeaf(key);
    if (key < node->data)
        node->left = insert(node->left,key);
    else if(key > node->data)
        node->right = insert(node->right,key);
    else
        return node;
};
void postOrder(struct Node*node)
{
    if(node!= NULL)
    {
        postOrder(node->left);
        postOrder(node->right);
        printf("%d ",node->data);
    }
}

void preOrder(struct Node*node)
{
    if(node!= NULL)
    {
        printf("%d ",node->data);
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(struct Node*node)
{
    if(node!= NULL)
    {
        inOrder(node->left);
        printf("%d ",node->data);
        inOrder(node->right);
    }
}
int main()
{

    struct Node * root;
    root = NULL;

    root = insert(root,15);
    root = insert(root,8);
    root = insert(root,12);
    root = insert(root,32);
    root = insert(root,13);
    root = insert(root,4);
    root = insert(root,39);
    root = insert(root,6);
    root = insert(root,3);
    root = insert(root,26);
    root = insert(root,11);


    printf("postOrder: \n");
    postOrder(root);
    printf("\npreOrder: \n");
    preOrder(root);
    printf("\ninOrder: \n");
    inOrder(root);
}
