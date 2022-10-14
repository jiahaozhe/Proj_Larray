/* START: _Larray_H */

#ifndef _Larray_H
#define _Larray_H

struct list
{
    int capacity;
    int size;
    int *array;
};
typedef struct list *ptrToNode;
typedef ptrToNode LIST;
typedef int POSITION;  
    
int Isempty(LIST L);
int RemoveDup(int x,LIST L);
void MakeEmpty(LIST L);
LIST Createlist(int max);
int Isfull(LIST L);
void Insert(int x,LIST L,POSITION P);
POSITION Findprevious(int x,LIST L);
POSITION Find(int x,LIST L);
void Delete(int x,LIST L);
LIST Deletelist(LIST L);
void Display(LIST L);
void InsertSelfAdjList(int x,LIST L);
void FindSelfAdjList(int x,LIST L);
void Deleteduplicates(LIST L);

#endif    /* _Larray_H */


/* END */
