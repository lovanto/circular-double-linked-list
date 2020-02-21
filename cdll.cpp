#include <iostream>
#include "cdll.h"

using namespace std;

bool isEmpty(List L){
    if (first(L) == NULL){
        return true;
    }
    return false;
}

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

void createNewElmt(infotype x, address &P){
    P = new elmList;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
}

void insertFirst(List &L, address &P){
    if (isEmpty(L) == true){
        first(L) = P;
        last(L) = P;
        next(P) = first(L);
        prev(P) = last(L);
    }else{
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        first(L) = P;
    }
}

void insertAfter(address prec, address P){

}

void deleteFirst(List &L, address &P){

}

void deleteAfter(address prec, address &P){

}

int countWord(char[], List L){

}

void printInfo(List L){
    address P = first(L);
    while (P != NULL)
    {
        cout << info(P);
        P = next(P);
    }
    cout << endl;
}

address findPrec(List L, address P){

}
