#ifndef MOD7_H_INCLUDED
#define MOD7_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(D)((D).first)
#define last(D) ((D).last)

typedef struct nasabah infotype;
typedef struct element *adr;

struct nasabah{
    int norek;
    float saldo;
    string nama;
};

struct element{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void CreateList_1301213072(List &D);
adr newElement_1301213072(infotype atk);
void show_1301213072(List D);
void insertFirst_1301213072(List &D, adr P);
void reverseList_1301213072(List &D);
float scndSmallest_1301213072(List &D);
int selectMenu_1301213072();

#endif // MOD7_H_INCLUDED
