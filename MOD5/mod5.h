#ifndef MOD5_H_INCLUDED
#define MOD5_H_INCLUDED
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

void createList_1301213072(List &D);
adr newElement_1301213072(infotype x);
void insertLast_1301213072(List &D, adr P);
void show_1301213072(List D);
float vocalPersentage_1301213072(List D);
void showLastK_1301213072(List D, int K);
int selectMenu_1301213072();

#endif // MOD5_H_INCLUDED
