#include "cdll.cpp"

int main()
{
    List L;
    address P, prec;
    int countData, countWordCAT;
    char data[10];

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

    countData = countWord(data, L);
    cout << "Jumlah kata: " << countData << endl;
    cout << "Dengan isi: ";
    printInfo(L, countData);
    countWordCAT = findWord(data, countData);
    cout << "Jumlah kata cat: " << countWordCAT << endl;
    cout << endl;

    cout << "DELETE FIRST" << endl;
    deleteFirst(L, P);
    countData = countWord(data, L);
    printInfo(L, countData);

    cout << "DELETE LAST" << endl;
    deleteLast(L, P);
    countData = countWord(data, L);
    printInfo(L, countData);

    cout << "DELETE AFTER" << endl;
    prec = findPrec(L, 't');
    deleteAfter(prec, P);
    countData = countWord(data, L);
    printInfo(L, countData);

    return 0;
}
