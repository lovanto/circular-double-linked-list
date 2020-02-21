#ifndef CDLL_H_INCLUDED
#define CDLL_H_INCLUDED

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev

typedef char infotype;
typedef struct elmList *address;

struct elmList
{
    infotype info;
    address next;
    address prev;
};

struct List
{
    address first;
    address last;
};

bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype x, address &P);
void insertFirst(List &L, address &P);
void insertAfter(address prec, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(address prec, address &P);
int countWord(char[], List L);
void printInfo(List L);
address findPrec(List L, address P);

#endif // CDL_H_INCLUDED
