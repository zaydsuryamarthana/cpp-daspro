#include "header.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void inputAnggota(dataAnggota *data, int jumlah, int &jumlahAnggota) {
  int tahunSekarang = 2026;
  for (int i = jumlahAnggota; i < jumlah; i++) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nama Lengkap\t: ";
    getline(cin, data[jumlahAnggota].nama);
    cout << "Kota Asal\t: ";
    getline(cin, data[jumlahAnggota].kota);
    do {
      cout << "Tahun Masuk\t: ";
      cin >> data[jumlahAnggota].tahun;

      if (data[jumlahAnggota].tahun > tahunSekarang)
        cout << "Tahun input tidak valid, lebih dari 2026." << endl;

    } while (data[jumlahAnggota].tahun > tahunSekarang);

    data[jumlahAnggota].masa = tahunSekarang - data[jumlahAnggota].tahun;

    if (data[jumlahAnggota].masa == 2)
      data[jumlahAnggota].tipe = "Silver";
    else if ((data[jumlahAnggota].masa >= 3) && (data[jumlahAnggota].masa <= 5))
      data[jumlahAnggota].tipe = "Gold";
    else if (data[jumlahAnggota].masa > 5)
      data[jumlahAnggota].tipe = "Platinum";
    else
      data[jumlahAnggota].tipe = "Tidak ada";

    jumlahAnggota++;
    cout << "----------------------------------" << endl;
  }
}

void tampilkanAnggota(dataAnggota *data, int jumlahAnggota) {
  if (jumlahAnggota == 0) {
    cout << "\nData tidak ditemukan, silahkan input data terlebih dahulu."
         << endl;
  } else {
    cout << "\n|-----------------------------------------|" << endl;
    cout << "|------ Data Anggota Sepeda Onthel ------ |" << endl;
    cout << "|-----------------------------------------|" << endl;
    for (int i = 0; i < jumlahAnggota; i++) {
      cout << "\n| Kartu Anggota " << i + 1 << " |" << endl;
      cout << "-----------------------------" << endl;
      cout << "Nama Lengkap\t: " << data[i].nama << endl;
      cout << "Asal Kota\t: " << data[i].kota << endl;
      cout << "Tahun Masuk\t: " << data[i].tahun << endl;
      cout << "Masa Aktif\t: " << data[i].masa << " Tahun" << endl;
      cout << "Tipe Kartu\t: " << data[i].tipe << endl;
      cout << "-----------------------------" << endl;
    }
  }
}

void pencarianAnggota(dataAnggota *data, int jumlahAnggota) {
  string search;
  int dataIndex = 0;

  if (jumlahAnggota == 0)
    cout << "\nData tidak ditemukan, silahkan input data terlebih dahulu."
         << endl;
  else {
    cout << "\n|---------------------------------------------------|" << endl;
    cout << "|------ Pencarian Data Anggota Sepeda Onthel ------ |" << endl;
    cout << "|---------------------------------------------------|" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ketik nama anggota yang dicari : ";
    getline(cin, search);
    for (int i = 0; i < jumlahAnggota; i++) {
      if (data[i].nama == search) {
        dataIndex = i;
        break;
      }
    }
    cout << "-----------------------------" << endl;
    cout << "Nama Lengkap\t: " << data[dataIndex].nama << endl;
    cout << "Asal Kota\t: " << data[dataIndex].kota << endl;
    cout << "Tahun Masuk\t: " << data[dataIndex].tahun << endl;
    cout << "Masa Aktif\t: " << data[dataIndex].masa << " Tahun" << endl;
    cout << "Tipe Kartu\t: " << data[dataIndex].tipe << endl;
    cout << "-----------------------------" << endl;
  }
}

void rekursifTampilkanAnggota(dataAnggota data[], int jumlahAnggota,
                              int iterasi) {
  if (iterasi == jumlahAnggota)
    return;
  else {
    cout << "\n|-----------------------------------------|" << endl;
    cout << "|------ Data Anggota Sepeda Onthel ------ |" << endl;
    cout << "|-----------------------------------------|" << endl;
    cout << "\n| Kartu Anggota " << iterasi + 1 << " |" << endl;
    cout << "-----------------------------" << endl;
    cout << "Nama Lengkap\t: " << data[iterasi].nama << endl;
    cout << "Asal Kota\t: " << data[iterasi].kota << endl;
    cout << "Tahun Masuk\t: " << data[iterasi].tahun << endl;
    cout << "Masa Aktif\t: " << data[iterasi].masa << " Tahun" << endl;
    cout << "Tipe Kartu\t: " << data[iterasi].tipe << endl;
    cout << "-----------------------------" << endl;

    rekursifTampilkanAnggota(data, jumlahAnggota, iterasi + 1);
  }
}
