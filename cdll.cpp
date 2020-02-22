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

void insertAfter(List &L, address prec, address P){
    next(P) = next(prec);
    prev(P) = prec;
    prev(next(prec)) = P;
    next(prec) = P;
    if(next(P) == first(L)){
        last(L) = P;
    }
}

void insertLast(List &L, address &P){
    next(last(L)) = P;
    prev(P) = last(L);
    prev(first(L)) = P;
    last(L) = P;
}

void deleteFirst(List &L, address &P){
    P = first(L);
    first(L) = next(P);
    prev(first(L)) = last(L);
    next(last(L)) = first(L);
    next(P) = NULL;
    prev(P) = NULL;
}

void deleteAfter(address prec, address &P){
    P = next(prec);
    next(prec) = next(P);
    prev(next(P)) = prec;
    next(P) = NULL;
    prev(P) = NULL;
}

void deleteLast(List &L, address &P){
    P = last(L);
    last(L) = prev(last(L));
    next(last(L)) = first(L);
    prev(first(L)) = last(L);
    next(P) = NULL;
    prev(P) = NULL;
}

int countWord(infotype data[], List L){
    address P = first(L);
    int i = 0;
    while(P != last(L)){
        data[i] = info(P);
        P = next(P);
        i++;
    }
    data[i]=info(last(L));
    return i + 1;
}

void printInfo(List L, int countData){
    address P = first(L);
    for(int i=0; i<countData; i++)
    {
        cout << info(P) << "  ";
        P = next(P);
    }
    cout << endl;
}

address findPrec(List L, char x){
    address P = first(L);
    while (P != last(L) && P != last(L))
    {
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return P;
}

int findWord(infotype data[], int countData){
    int countWord = 0;
    int i, j, k;
    for(i=0; i<countData; i++)
    {
        j = i+1;
        k = i+2;

        if (j>=countData){
            j = j-countData;
        }
        if (k>=countData){
            k = k-countData;
        }

        if (data[i]=='c' && data[j]=='a' && data[k]=='t'){
            countWord++;
        }
    }
    return countWord;
}
