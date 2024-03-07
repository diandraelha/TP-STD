#include "atk.h"

void CreateList_1301213072(List &D){
    first(D) = NULL;
    last(D) = NULL;

}

infotype newdata_1301213072(int data_faktur, int jumlah, string nama, int harga){
    infotype data;

    data.data_faktur = data_faktur;
    data.jumlah = jumlah;
    data.nama = nama;
    data.harga = harga;

    return data;
}

adr newElement_1301213072(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_1301213072(List &D, adr P){
    if (first(D) == NULL && last(D) == NULL){
        first(D) = P;
        last(D) = P;
    }else {
        next(P) = first(D);
        prev(first(D)) = P;
        first(D) = P;
    }
}

void show_1301213072(List D){
    if (first(D) != NULL && last(D) != NULL){
        adr P = first(D);
        while (P != NULL){
            cout << "ID Faktur : " << (info(P).data_faktur) << endl;
            cout << "Jumlah Barang : "<< (info(P).jumlah) << endl;
            cout << "Nama Barang : " << (info(P).nama) << endl;
            cout << "Harga Barang : " << (info(P).harga) << endl;
            P = next(P);
        }
        cout << endl;
    }else {
        cout << "List Kosong" << endl;
    }
}

void tampil_data_1301213072(List D){
    int i = 0;
    adr P = first(D);

    if (first(D) == NULL && last(D) == NULL){
        cout << "Tidak ada data";
    } else{
        while (P != NULL ){
            if (i == 4){
                cout << "ID Faktur : " << (info(P).data_faktur) << endl;
                cout << "Jumlah Barang : " << (info(P).jumlah) << endl;
                cout << "Nama Barang : " << (info(P).nama) << endl;
                cout << "Harga Barang : " << (info(P).harga) << endl;
            }else{
                cout << "data tidak ditemukan" << endl;
            }
            i++;
            P = next(P);
        }
    }
}

int selectMenu_1301213072(){
    cout << endl << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data penjualan ke-4" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Pilihan Menu : ";

    int input = 0;
    cin >> input;

    return input;
}
