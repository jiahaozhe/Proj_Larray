#include <stdlib.h>
#include <stdio.h>
#include "larray.h"
#include "self_adjusting lists.h"
int main()
{
LIST L;
L=(struct list *)malloc(sizeof(struct list));
L->capacity = 9;
int fuck[9] = {1,2,2,4,5};
L->array = fuck;
L->size = 5;
    Deleteduplicates(L);
    //InsertSelfAdjList(8,L);
    //FindSelfAdjList(4,L);
    for(int i = 0;i<L->size;i++)
    {
        printf("%d\n",L->array[i]);
    }
return 0;
}
