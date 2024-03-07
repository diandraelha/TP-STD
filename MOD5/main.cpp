#include "mod5.h"

int main()
{
    int K, pilihan = 0, x;
    char chara;
    infotype data;
    List D;

    createList_1301213072(D);
    pilihan = selectMenu_1301213072();

    while (pilihan != 0){
        switch(pilihan){
        case 1:
            cout << "Jumlah data yang akan ditambahkan : ";
            cin >> x;

            for (int i = 1; i <= x; i++){
                cout << "Masukkan data baru : ";
                cin >> chara;
                data = chara;
                adr P = newElement_1301213072(data);
                insertLast_1301213072(D, P);
            }
            break;

        case 2:
            show_1301213072(D);
            break;

        case 3:
            cout << vocalPersentage_1301213072(D) << "%" << endl;
            break;

        case 4:
            cout << "Masukkan K : ";
            cin >> K;
            showLastK_1301213072(D, K);
            break;
        }
     pilihan = selectMenu_1301213072();
    }

    cout << "BYE BYE" << endl;
    return 0;
}
