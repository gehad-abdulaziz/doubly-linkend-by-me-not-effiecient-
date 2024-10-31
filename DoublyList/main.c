#include <stdio.h>
#include "doubly.h"

int main()
{
    Linkedlist lq;
    CreateList(&lq);
    for(int i =0 ;i< 10 ; i++)
    Insert(&lq , i, i);
    int y;
        for(int i =0 ;i< 10 ; i++)
{
    Retrieve(&lq , &y , 0);
    printf("%d " ,y );
}
}
