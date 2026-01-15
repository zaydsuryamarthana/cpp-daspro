#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

using namespace std;

typedef struct kartuAnggota {
  int tahun, masa;
  string nama, kota, tipe;
} dataAnggota;

void tampilkanAnggota(dataAnggota data[], int jumlahAnggota);
void inputAnggota(dataAnggota data[], int jumlah, int &jumlahAnggota);
void pencarianAnggota(dataAnggota data[], int jumlahAnggota);
void rekursifTampilkanAnggota(dataAnggota data[], int jumlahAnggota,
                              int iterasi);

#endif