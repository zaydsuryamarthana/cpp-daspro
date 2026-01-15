#include "header.h"
#include <iostream>

using namespace std;

int main() {
  int pilihan, jumlah, jumlahAnggota = 0;
  dataAnggota data[40];
  do {
    cout << "\nProgram Kartu Anggota Sepeda Onthel" << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Menambahkan data Kartu Anggota" << endl;
    cout << "2. Melihat seluruh data Kartu Anggota" << endl;
    cout << "3. Pencarian Kartu Anggota Sepeda Onthel" << endl;
    cout << "4. Menampilkan seluruh data Kartu Anggota (Rekursif)" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      cout << "\nMasukkan jumlah data : ";
      cin >> jumlah;
      inputAnggota(data, jumlah, jumlahAnggota);
      break;
    case 2:
      tampilkanAnggota(data, jumlahAnggota);
      break;
    case 3:
      pencarianAnggota(data, jumlahAnggota);
      break;
    case 4:
      rekursifTampilkanAnggota(data, jumlahAnggota, 0);
      break;
    default:
      cout << "\nInput tidak valid, silahkan ulangi kembali!" << endl;
      break;
    }

  } while (pilihan != 0);

  return 0;
}