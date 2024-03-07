#ifndef TP_WEEK_4_H_INCLUDED
#define TP_WEEK_4_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(D)((D).first)


typedef char infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList(List &D);
adr newElement(infotype x);
void insertFirst(List &D, adr P);
void show(List D);
adr deleteLast(List &D);
void insertLast(List &D, adr P);

#endif // TP_WEEK_4_H_INCLUDED
