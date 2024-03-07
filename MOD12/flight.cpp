#include "flight.h"

void CreateListJAdwal_1301213072(ListJadwal &L)
{
    first(L) = NULL;
}

adrjdwl CreateElement_1301213072(infotype x)
{
    adrjdwl P = new elmjdwl;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void inserLast_1301213072(ListJadwal &L, adrjdwl P)
{
    adrjdwl Q = first(L);

    if (first(L) == NULL)
    {
        first(L) = P;
    }
    else
    {
        while(next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showJadwal_1301213072(ListJadwal L)
{
    if (first(L) != NULL)
    {
        adrjdwl P = first(L);
        while (P != NULL)
        {
            cout << (info(P).Kode) << endl;
            cout << (info(P).Jenis) << endl;
            cout << (info(P).Tanggal) << endl;
            cout << (info(P).Waktu) << endl;
            cout << (info(P).Asal) << endl;
            cout << (info(P).Tujuan) << endl;
            cout << (info(P).Kapasitas) << endl << endl;
            P = next(P);
        }
    }
    else
    {
        cout << "List Kosong" << endl;
    }
}

void deleteFirst_1301213072(ListJadwal &L, adrjdwl &P)
{
    if (first(L) != NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
    else
    {
        cout << "List Kosong" << endl;
    }
}

bool search_1301213072(ListJadwal L, string dari, string ke, string tanggal)
{
    adrjdwl P = first(L);

    if(first(L) = NULL)
    {
        cout << "List Kosong" << endl;
    }
    else
    {
        while (P != NULL)
            {
            if (info(P).Asal == dari && info(P).Tujuan == ke && info(P).Tanggal == tanggal)
            {
                return true;
            }
            else
            {
                return false;
            }
            P = next(P);
        }

    }
}
