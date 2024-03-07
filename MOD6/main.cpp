#include "atk.h"


int main()
{
  List D;
  int pilihan = 0, K, x;
  adr P;
  infotype data;

  CreateList_1301213072(D);
  pilihan = selectMenu_1301213072();


  while(pilihan != 0){
    switch(pilihan){
    case 1:
        cout << "Jumlah data yang akan ditambahkan : ";
        cin >> x;
        for (int i = 1; i <= x; i++){
            cout << "Masukan data yang akan ditambahkan : " << endl;
            cout << "Id Faktur : ";
            cin >> data.data_faktur;
            cout << "Nama Barang : ";
            cin >> data.nama;
            cout << "Jumlah Barang : ";
            cin >> data.jumlah;
            cout << "Total harga : ";
            cin >> data.harga;
            cout << endl;
            P = newElement_1301213072(data);
            insertFirst_1301213072(D, P);
        }
        break;
    case 2:
        cout << "Data :" << endl;
        show_1301213072(D);
        cout << endl;
        break;
    case 3:
        cout << "Data pembelian ke-4 :";
        tampil_data_1301213072(D);
        break;
    }
    pilihan = selectMenu_1301213072();
  }
  cout << "done " << endl;
    return 0;
}
