#include "mod5.h"

void createList_1301213072(List &D){
    first(D) = NULL;
}

adr newElement_1301213072(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast_1301213072(List &D, adr P){
    adr Q = first(D);

    if (first(D) == NULL){
        first(D) = P;
    }else {
        while(next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = NULL;
    }
}

void show_1301213072(List D){
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
float vocalPersentage_1301213072(List D){
    float vokal, data, persen;
    adr P = first(D);

    vokal = 0;
    data = 0;

    while (P != NULL){
        if (info(P) == 'A' ||  info(P) == 'I' || info(P) == 'U' ||  info(P) == 'E' ||  info(P) == 'O' ){
            vokal++;
        }else if (info(P) == 'a' || info(P) == 'i' || info(P) == 'u' ||info(P) == 'e' ||info(P) == 'o'){
            vokal++;
        }
        data++;
        P = next(P);
    }
    persen = (vokal / data)*100.0;
    return persen;
}

void showLastK_1301213072(List D, int K){
    adr P = first(D);
    int i = 0;
    int j = 0;

    while (P != NULL){
        i++;
        P = next(P);
    }
    j = i - K;
    P = first(D);

    i = 0;

    while (i < j && P != NULL){
        P = next(P);
        i++;
    }
    cout << info(P) << endl;
}

int selectMenu_1301213072(){
    cout << endl << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan persentase huruf vokal" << endl;
    cout << "4. Menampilkan huruf konsonan dari K terakhir" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Pilihan Menu : ";

    int input = 0;
    cin >> input;

    return input;
}
