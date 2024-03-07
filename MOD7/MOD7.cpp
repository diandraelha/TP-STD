#include "MOD7.H"


void CreateList_1301213072(List &D){
    first(D) = NULL;
    last(D) = NULL;

}

adr newElement_1301213072(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void show_1301213072(List D){
    if (first(D) != NULL && last(D) != NULL){
        adr P = first(D);
        while (P != NULL){
            cout << "No. Rek : " << (info(P).norek) << endl;
            cout << "Nama : "<< (info(P).nama) << endl;
            cout << "Saldo : " << (info(P).saldo) << endl;
            P = next(P);
        }
        cout << endl;
    }else {
        cout << "List Kosong" << endl;
    }
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

void reverseList_1301213072(List &D){
    if (first(D) != NULL && last(D) != NULL){
        adr P = last(D);
        while (P != NULL){
            cout << "No. Rek : " << (info(P).norek) << endl;
            cout << "Nama : "<< (info(P).nama) << endl;
            cout << "Saldo : " << (info(P).saldo) << endl;
            P = prev(P);
        }
        cout << endl;
    }else {
        cout << "List Kosong" << endl;
    }
}

float scndSmallest_1301213072(List &D){
    adr P = first(D);
    adr Q = first(D);
    adr x = first(D);

    while (P != NULL){
        if (info(x).saldo >= info(P).saldo){
            Q = x;
            x = P;
        }
        P = next(P);
    }

    /*int norek = info(Q).norek;
    string nama = info(Q).nama;
    int saldo = info(Q).saldo;*/

    return info(Q).saldo;
}

int selectMenu_1301213072(){
    cout << endl << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan semua data secara terbalik" << endl;
    cout << "4. Menampilkan saldo terkecil ke-2" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Pilihan Menu : ";

    int input = 0;
    cin >> input;

    return input;
}
