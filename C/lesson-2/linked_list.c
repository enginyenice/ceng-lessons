#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node * next;

};
struct node *first = NULL, * last = NULL;
void addToEnd(int value)
{
    struct node * newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    if(first == NULL)
    {
        first = newNode;
        newNode->next = NULL;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = newNode;
        newNode->next = NULL;
    }

}

void addToHead(int value)
{
    struct node * newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    if(first == NULL)
    {
        first = newNode;
        last = newNode;
        last->next = NULL;

    }
    else
    {
        newNode->next = first;
        first = newNode;
    }



}

void addToMid(int before,int value)
{
    struct node * newNode = (struct node*)malloc(sizeof(struct node));
    struct node * list;

    newNode->data = value;
    struct node * addToIt = (struct node*)malloc(sizeof(struct node));

    list = first;
    while(list->next->data!=before)
    {
        list = list->next;
    }

//    8->9->10
    addToIt = list->next;
    list->next = newNode;
    newNode->next = addToIt;






}
void Push(int value)
{
    int midStatus  = 0;
    struct node *list;
    struct node *temp;
    list = first;
    while(list!= NULL)
    {
        if((value < list->next) && value > first->data && value < last->data )
        {
            midStatus = 1;
            temp = list->next;
        }

        if((value > last->data))
        {
            addToEnd(value);
        }
         if((value < first->data))
        {
            addToHead(value);
        }
            list = list->next;

    }
    if(midStatus == 1)
    {

        addToMid(temp->data,value);
    }
}
void printList()
{
    printf("\n");
    struct node *list;
    list = first;
    while(list!= NULL)
    {
        printf("%d ",list->data);
        list = list->next;
    }
}


int main()
{
    addToEnd(2);
    addToEnd(5);
    addToEnd(8);
    addToEnd(10);

    Push(9);
    Push(1);
    Push(11);

    printList();


}
