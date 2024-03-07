#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(D)((D).first)

typedef struct elmjdwl *adrjdwl;
typedef struct jadwalPenerbangan infotype;

struct jadwalPenerbangan{
    string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan;
    int Kapasitas;
};

struct elmjdwl{
    infotype info;
    adrjdwl next;
};

struct ListJadwal{
    adrjdwl first;
};

void CreateListJAdwal_1301213072(ListJadwal &L);
adrjdwl CreateElement_1301213072(infotype x);
void inserLast_1301213072(ListJadwal &L, adrjdwl P);
void showJadwal_1301213072(ListJadwal L);
void deleteFirst_1301213072(ListJadwal &L, adrjdwl &P);
bool search_1301213072(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
