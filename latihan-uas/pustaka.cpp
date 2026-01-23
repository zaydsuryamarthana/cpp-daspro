#include "header.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void registrasiPeseta(dataContestan *peserta, nilaiContestan *nilai,
                      int inputData, int &jumlahData) {
  cout << "\nRegistrasi Peserta Lomba" << endl;
  cout << "----------------------------" << endl;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int i = 0; i < inputData; i++) {
    cout << "Nama Peserta\t: ";
    getline(cin, peserta[jumlahData].nama);
    cout << "Jenis Burung\t: ";
    getline(cin, peserta[jumlahData].jenisBurung);

    peserta[jumlahData].id = jumlahData;
    peserta[jumlahData].noGantangan = jumlahData + 1;

    jumlahData++;
    cout << "----------------------------" << endl;
  }
  cout << "Data Peserta telah ditambahkan" << endl;
}

void dataPeserta(dataContestan *peserta, nilaiContestan *nilai,
                 int jumlahData) {
  cout << "\nData Peserta Lomba" << endl;
  cout << "-----------------------------------------" << endl;
  if (jumlahData <= 0) {
    cout << "Data Registrasi tidak ditemukan! Input data terlebih dahulu"
         << endl;
  } else {
    for (int i = 0; i < jumlahData; i++) {
      cout << "Nomor Gantangan\t: " << peserta[i].noGantangan << endl;
      cout << "Nama Peserta\t: " << peserta[i].nama << endl;
      cout << "Jenis Burung\t: " << peserta[i].jenisBurung << endl;
      cout << "-----------------------------------------" << endl;
      cout << "Irama\t\t: " << nilai[i].irama << endl;
      cout << "Volume\t\t: " << nilai[i].suara << endl;
      cout << "Fisik\t\t: " << nilai[i].fisik << endl;
      cout << "Durasi\t\t: " << nilai[i].durasi << endl;
      cout << "Total\t\t: " << nilai[i].total << endl;
      cout << '\n';
    }
  }
}

void penilaianPeserta(dataContestan *peserta, nilaiContestan *nilai,
                      int jumlahData) {
  int gantangan;
  char tindakan;

  if (jumlahData <= 0) {
    cout << "Tidak ada data peserta lomba" << endl;
    return;
  }

  do {
    cout << "Pilih peserta berdasarkan Nomor Gantangan [0 = Kembali] : ";
    cin >> gantangan;

    if (gantangan == 0)
      return;

    gantangan = gantangan - 1;

    cout << "\nData dari nomor yang dipilih adalah" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Nama Peserta\t: " << peserta[gantangan].nama << endl;
    cout << "Jenis Burung\t: " << peserta[gantangan].jenisBurung << endl;
    cout << "\nApakah kamu ingin menilai peserta ini? ";
    cin >> tindakan;
  } while ((tindakan == 'n') || (tindakan == 'N'));

  cout << "\n---------------------------------------" << endl;
  cout << "Penilaian Lomba Gantangan | " << peserta[gantangan].nama << endl;
  cout << "---------------------------------------" << endl;
  do {
    cout << "Irama\t: ";
    cin >> nilai[gantangan].irama;
    cout << "Volume\t: ";
    cin >> nilai[gantangan].suara;
    cout << "Fisik\t: ";
    cin >> nilai[gantangan].fisik;
    cout << "Durasi\t: ";
    cin >> nilai[gantangan].durasi;

    if ((nilai[gantangan].irama > 100) || (nilai[gantangan].suara > 100) ||
        (nilai[gantangan].fisik > 100) || (nilai[gantangan].durasi > 100)) {
      cout << "\nNilai tidak boleh melibihi batas [0 - 100]\n" << endl;
    }

  } while ((nilai[gantangan].irama > 100) || (nilai[gantangan].suara > 100) ||
           (nilai[gantangan].fisik > 100) || (nilai[gantangan].durasi > 100));

  nilai[gantangan].total = (nilai[gantangan].irama * 40 / 100) +
                           (nilai[gantangan].suara * 30 / 100) +
                           (nilai[gantangan].fisik * 20 / 100) +
                           (nilai[gantangan].durasi * 10 / 100);

  if ((nilai[gantangan].total >= 90) && (nilai[gantangan].total < 100))
    nilai[gantangan].predikat = 'A';
  else if ((nilai[gantangan].total < 90) && (nilai[gantangan].total >= 85))
    nilai[gantangan].predikat = 'B';
  else if ((nilai[gantangan].total < 85) && (nilai[gantangan].total >= 70))
    nilai[gantangan].predikat = 'C';
  else if ((nilai[gantangan].total < 70) && (nilai[gantangan].total >= 55))
    nilai[gantangan].predikat = 'D';
  else
    nilai[gantangan].predikat = 'E';
}

void laporanKompetisi(dataContestan *peserta, nilaiContestan *nilai,
                      int jumlahData, int iterasi) {
  cout << "Laporan Kompetisi" << endl;
}

void pencarianPeserta(dataContestan *peserta, nilaiContestan *nilai,
                      int jumlahData) {
  int gantangan;
  char tindakan;
  do {
    cout << "\nPencarian Data Peserta Gantangan Burung" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Cari nomor gantangan : ";
    cin >> gantangan;

    gantangan = gantangan - 1;

    if (peserta[gantangan].id != gantangan) {
      cout << "Tidak ditemukan data dengan Nomor Gantangan " << gantangan + 1
           << endl;
      return;
    } else {
      cout << "\n| Nama Peserta\t: " << peserta[gantangan].nama << endl;
      cout << "| Jenis Burung\t: " << peserta[gantangan].jenisBurung << endl;
      cout << "| Total Nilai\t: " << nilai[gantangan].total << endl;
      cout << "-------------------- Detail Penilaian --------------------"
           << endl;
      cout << "| Irama\t: " << nilai[gantangan].irama << endl;
      cout << "| Volume\t: " << nilai[gantangan].suara << endl;
      cout << "| Fisik\t: " << nilai[gantangan].fisik << endl;
      cout << "| Durasi\t: " << nilai[gantangan].durasi << endl;

      cout << "\nApakah kamu ingin mencari data peserta lain? ";
      cin >> tindakan;
    }
  } while ((tindakan == 'y') || (tindakan == 'Y'));
}