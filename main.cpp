#include "cdll.cpp"

int main()
{
    List L;
    address P, prec;

    createList(L);
    createNewElmt('a', P);
    insertFirst(L, P);

    createNewElmt('t', P);
    insertFirst(L, P);

    prec = findPrec(L, 'a');
    createNewElmt('t', P);
    insertAfter(L, prec, P);

    prec = findPrec(L, 't');
    createNewElmt('c', P);
    insertAfter(L, prec, P);

    createNewElmt('a', P);
    insertLast(L, P);

    createNewElmt('s', P);
    insertLast(L, P);

    createNewElmt('c', P);
    insertLast(L, P);

    createNewElmt('a', P);
    insertLast(L, P);
    printInfo(L);
    return 0;
}
