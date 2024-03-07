#include "flight.h"

int main()
{
    ListJadwal L;
    infotype Jadwal;
    adrjdwl P, Q;
    int n;

    CreateListJAdwal_1301213072(L);
    cout << "Banyak Data Jadwal Penerbangan : ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << "Kode Penerbangan : ";
        cin >> Jadwal.Jenis;
        cout << "Jenis Penerbangan : ";
        cin >> Jadwal.Jenis;
        cout << "Tanggal Penerbangan : ";
        cin >> Jadwal.Tanggal;
        cout << "Waktu Penerbangan : ";
        cin >> Jadwal.Waktu;
        cout << "Asal Penerbangan : ";
        cin >> Jadwal.Asal;
        cout << "Tujuan Penerbangan : ";
        cin >> Jadwal.Tujuan;
        cout << "Kapasitas Penerbangan : ";
        cin >> Jadwal.Kapasitas;
        cout << endl;

        P = CreateElement_1301213072(Jadwal);
        inserLast_1301213072(L, P);
    }

    cout << ":::::::::::::: Menampilkan Jadwal Penerbangan ::::::::::::::" << endl;
    showJadwal_1301213072(L);

    cout << ":::::::::::::: Menampilkan Jadwal Penerbangan Setelah Dihapus ::::::::::::::" << endl;
    deleteFirst_1301213072(L, Q);
    showJadwal_1301213072(L);

    cout << "Pencarian jadwal penerbangan dari Surabaya ke Malang tanggal 9 Desember 2022 : " << search_1301213072(L, "Surabaya", "Malang", "12/09/2022") << endl;

    return 0;
}
