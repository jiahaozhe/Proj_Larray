//
// Created by 26949 on 2022/10/12.
//

#include "self_adjusting lists.h"
#include <stdlib.h>
#include <stdio.h>
#include "larray.H"
void InsertSelfAdjList(int x, LIST L)
{
    int i = L->size-1;
    if(Isfull(L))
        printf("\n List is Full");
    else
    {
        int * ptr1;
        int * ptr2;
        ptr1 = L->array;
        ptr2 = ptr1+1;
        while(*(ptr2)!='\0')
        {
            ptr2++;
            ptr1++;
            printf("ptr1 is %d\n",*ptr1);
        }
     for(;i>0;i--)
     {
         *(ptr2) = *(ptr1);
         ptr2--;
         ptr1--;
         printf("The ptr1 is %d\n",*ptr1);
     }
     *(ptr2) = *(ptr1);
    *(ptr1) = x;
    }
}
void FindSelfAdjList(int x,LIST L)
{
    int POS = Find(x,L);
    int temp = L->array[POS];
    while(POS!=0)
    {
        L->array[POS]=L->array[POS-1];
        POS--;
    }
    L->array[POS] = temp;

}
void Deleteduplicates(LIST L)
{
    int last_position = L->size;
    int j;
    for(int i = 0;i<last_position;i++)
    {
        j = i + 1;
        while(j<last_position)
        {
            if(L->array[i]==L->array[j])
                Delete(L->array[i],L);
            else
                j++;
        }
    }
}
