#include "TP week 4.h"

void createList(List &D){
    first(D) = NULL;
}

adr newElement(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List &D, adr P){
    if (first(D) == NULL){
        first(D) = P;
    }else {
        next(P) = first(D);
        first(D) = P;
    }
}

void show(List D){
    if (first(D) != NULL){
        adr P = first(D);
        while (P != NULL){
            cout << (info(P)) << " ";
            P = next(P);
        }
        cout << endl;
    }else {
        cout << "List Kosong" << endl;
    }
}

adr deleteLast(List &D){
    adr P, Q;

    if (first(D) == NULL){
        P = NULL;
        cout << "List Kosong" << endl;
    } else if (next(first(D)) == NULL){
        P = first(D);
        first(D) = NULL;
    } else{
        Q = first(D);
        P = first(D);
        while (next(P) != NULL){
            Q = P;
            P = next(P);
        }
    }
    next(Q) = NULL;
    return P;
}

void insertLast(List &D, adr P){
    if (next(first(D)) == NULL){
       next(first(D)) = P;
    }else{
        adr Q = first(D);
        while (next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}
