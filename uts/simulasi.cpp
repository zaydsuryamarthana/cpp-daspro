#include "simulasi.h"
#include <iostream>

using namespace std;

void soal1() {
  string nama, merk;
  char motor, pilihan, restart;
  int kembalian, total, harga;
  do {
    cout << "\nProgram Dealer Motor Indonesia\n" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "DEALER MOTOR INDONESIA | MURAH DAN TERPERCAYA" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Jl. Jenderal Sudirman No.320B, Salamanmloyo, 50145" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "1. Honda\t: Supra X 125, Megapro, Tiger" << endl;
    cout << "2. Yamaha\t: Jupiter, Mio, Vixion\n" << endl;
    cout << "Pilih salah satu Merk motor [H/h/Y/y] : ";
    cin >> merk;
    do {
      if ((merk == "h") || (merk == "H") || (merk == "Honda")) {
        merk = "Honda";
        cout << "\nDealer Motor | Motor Honda" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Motor Supra X 125 [S/s]" << endl;
        cout << "2. Motor Megapro [M/m]" << endl;
        cout << "3. Motor Tiger [T/t]" << endl;
        cout << "4. Kembali [0]\n" << endl;
        cout << "Pilih salah satu motor : ";
        cin >> motor;
        if ((motor == 'S') || (motor == 's')) {
          nama = "Supra X 125";
          harga = 15000000;
        } else if ((motor == 'M') || (motor == 'm')) {
          nama = "Megapro";
          harga = 18000000;
        } else if ((motor == 'T') || (motor == 't')) {
          nama = "Tiger";
          harga = 25000000;
        } else if (motor == '0') {
          break;
        } else {
          nama = "Tidak ada";
          harga = 0;
        }
      } else if ((merk == "y") || (merk == "Y") || (merk == "Yamaha")) {
        merk = "Yamaha";
        cout << "\nDealer Motor | Motor Yamaha" << endl;
        cout << "----------------------------" << endl;
        cout << "1. Motor Jupiter [J/j]" << endl;
        cout << "2. Motor Mio [M/m]" << endl;
        cout << "3. Motor Vixion [V/v]\n" << endl;
        cout << "Pilih salah satu motor : ";
        cin >> motor;
        if ((motor == 'J') || (motor == 'j')) {
          nama = "Jupiter";
          harga = 17000000;
        } else if ((motor == 'M') || (motor == 'm')) {
          nama = "Mio";
          harga = 13000000;
        } else if ((motor == 'V') || (motor == 'v')) {
          nama = "Vixion";
          harga = 22000000;
        } else {
          nama = "Tidak ada";
          harga = 0;
        }
      } else {
        cout << "\nInputan Salah\n" << endl;
        break;
      }
      cout << "--------------------------------" << endl;
      cout << "INFORMASI DETAIL MOTOR" << endl;
      cout << "--------------------------------" << endl;
      cout << "Nama Motor\t: " << nama << endl;
      cout << "Jenis Motor\t: " << merk << endl;
      cout << "Harga\t\t: Rp. " << harga << endl;
      cout << "--------------------------------" << endl;
      cout << "Apakah kamu tertarik untuk membelinya [y/n] : ";
      cin >> pilihan;
      cout << '\n';
    } while ((pilihan == 'n') || (pilihan == 'n'));
    cout << "------------------------------" << endl;
    cout << "NOTA PEMBAYARAN | DEALER MOTOR" << endl;
    cout << "------------------------------" << endl;
    cout << "Nama Motor\t: " << nama << " | " << merk << endl;
    cout << "Harga\t\t: Rp. " << harga << endl;
    cout << "PPN 10%\t\t: Rp. " << ((harga * 10) / 100) << endl;
    cout << "------------------------------" << endl;
    cout << "Total\t\t: Rp. " << (harga = harga + ((harga * 10) / 100)) << endl;
    do {
      cout << "Bayar\t\t: Rp. ";
      cin >> total;
      if (total < harga) {
        cout << "Nominal uang kurang! Rp. " << (kembalian = harga - total)
             << endl;
      }
    } while (total < harga);
    cout << "Kembali\t\t: Rp. " << (total - harga) << endl;
    cout << "------------------------------" << endl;
    cout << "TERIMAKASIH SUDAH BERBELANJA" << endl;
    cout << "------------------------------" << endl;
    cout << "Apakah kamu ingin membeli motor lagi [y/n] : ";
    cin >> restart;
  } while ((restart == 'y') || (restart == 'Y'));
}

void soal2() {
  int baris;
  char pilihan;
  cout << "\nProgram Pola Piramida Menurun" << endl;
  do {
    cout << "Masukkan nilai baris : ";
    cin >> baris;
    for (int i = baris; i >= 1; i--) {
      for (int j = baris; j > i; j--) {
        cout << " ";
      }
      for (int j = 1; j <= i; j++) {
        cout << i << " ";
      }
      cout << endl;
    }
    cout << "\nApakah kamu ingin mengulanginya lagi [y/n] : ";
    cin >> pilihan;
  } while ((pilihan == 'y') || (pilihan == 'Y'));
}

void simulasi() {
  int pilihan;
  cout << "SIMULASI UTS PRAKTIK | Dasar Pemrograman C++" << endl;
  cout << "--------------------------------------------" << endl;
  cout << "1. Program Dealer Motor Indonesia" << endl;
  cout << "2. Program Pola Piramida Menurun\n" << endl;
  cout << "Pilih salah satu program UTS : ";
  cin >> pilihan;
  switch (pilihan) {
  case 1:
    soal1();
    break;
  case 2:
    soal2();
    break;
  default:
    cout << "Input tidak valid" << endl;
    break;
  }
}
