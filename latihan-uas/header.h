#ifndef HEADER_H
#define HEADER_H

#include <iostream>

using namespace std;

typedef struct dataContestan {
  string nama, jenisBurung;
  int noGantangan, id;
} anggota;

typedef struct nilaiContestan {
  float irama, suara, fisik, durasi, total;
  char predikat;
} nilai;

void registrasiPeseta(dataContestan peserta[], nilaiContestan nilai[],
                      int inputData, int &jumlahData);
void dataPeserta(dataContestan peserta[], nilaiContestan nilai[],
                 int jumlahData);

void penilaianPeserta(dataContestan peserta[], nilaiContestan nilai[],
                      int jumlahData);

void laporanKompetisi(dataContestan peserta[], nilaiContestan nilai[],
                      int jumlahData, int iterasi);

void pencarianPeserta(dataContestan peserta[], nilaiContestan nilai[],
                      int jumlahData);

#endif