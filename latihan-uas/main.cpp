#include "header.h"
#include <iostream>

using namespace std;

int main() {

  int pilihan, maxData = 100, inputData, jumlahData = 0, iterasi = 0;
  anggota peserta[maxData];
  nilai nilai[maxData];

  do {
    cout << "\n---------------------------------" << endl;
    cout << "Sistem Manajemen Gantangan Burung" << endl;
    cout << "---------------------------------" << endl;
    cout << "1. Registrasi Peserta Lomba" << endl;
    cout << "2. Seluruh Data Peserta Lomba" << endl;
    cout << "3. Penilaian Lomba berdasarkan Peserta" << endl;
    cout << "4. Data Laporan Penilaian Lomba" << endl;
    cout << "5. Pencarian Data Peserta Lomba" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Pilih salah satu program : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      cout << "Masukkan data yang ingin dilombakan : ";
      cin >> inputData;
      registrasiPeseta(peserta, nilai, inputData, jumlahData);
      break;
    case 2:
      dataPeserta(peserta, nilai, jumlahData);
      break;
    case 3:
      penilaianPeserta(peserta, nilai, jumlahData);
      break;
    case 4:
      laporanKompetisi(peserta, nilai, jumlahData, iterasi);
      break;
    case 5:
      pencarianPeserta(peserta, nilai, jumlahData);
      break;
    default:
      cout << "Program tidak ditemukan!" << endl;
      break;
    }
  } while (pilihan != 0);

  return 0;
}