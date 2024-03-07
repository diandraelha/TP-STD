#ifndef ATK_H_INCLUDED
#define ATK_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(D)((D).first)
#define last(D) ((D).last)


typedef struct atk infotype;
typedef struct element *adr;

struct atk{
    int data_faktur;
    int jumlah;
    string nama;
    int harga;
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
infotype newdata_1301213072(int data_faktur, int jumlah, string nama, int harga);
adr newElement_1301213072(infotype atk);
void insertFirst_1301213072(List &D, adr P);
void show_1301213072(List D);
void tampil_data_1301213072(List D);
int selectMenu_1301213072();


#endif // ATK_H_INCLUDED
