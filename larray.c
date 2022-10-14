
/* START: _Larray_C */

#include <stdio.h>
#include <malloc.h>
#include "larray.h"

int Isempty(LIST L)
{
	return L->size==0;
}

int Isfull(LIST L)
{
	return L->size==L->capacity;
}

POSITION Find(int x,LIST L)
{
	POSITION P;
	P=0;
	while(P!=L->size&&L->array[P]!=x)
	{
		P++;
	}
	return P;
}

void Delete(int x,LIST L)
{
	int i;
	POSITION P;
	P=Find(x,L);
	if(P==L->size)
		printf("\n Element not found in the list");
	else
	{
		for(i=P;i<L->size;i++)	
			L->array[i]=L->array[i+1];
		L->size--;
	}
}
/* END */
