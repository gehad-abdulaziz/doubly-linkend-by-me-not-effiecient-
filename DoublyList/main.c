#include <stdio.h>
#include "doubly.h"
void print(LinkedType e)
{
    printf("%d " , e);
}
int main()
{
    Linkedlist lq;
    CreateList(&lq);
    int q=0;
    for(int i =10 ;i>=0; i--)
    Insert(&lq , i, q++);
    Insert(&lq , 78, q++);
    Insert(&lq , 65, q++);
    Insert(&lq ,47, q++);
    Insert(&lq , 24, q++);

    printf("\nprint queue with function i made in implementation level : \n");
    TraverseList(&lq , &print);
    printf("\nprint revesre queue with function i made in implementation level : \n");
    ReverseTraverseList(&lq, &print);

}
