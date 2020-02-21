#ifndef CDLL_H_INCLUDED
#define CDLL_H_INCLUDED
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev

using namespace std;
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
void insertAfter(List &L, address prec, address P);
void insertLast(List &L, address &P);
void deleteFirst(List &L, address &P);
void deleteAfter(address prec, address &P);
int countWord(infotype data[], List L);
void printInfo(List L);
address findPrec(List L, char x);

#endif // CDL_H_INCLUDED
