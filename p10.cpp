#include "p10.h"
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

typedef struct data
{
    string nama, nim;
    float ipk;
} mahasiswa;

void kasus1P10()
{
    char pilihan;
    mahasiswa identitas;
    do
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n------------------------" << endl;
        cout << "Pengenalan Data Struktur" << endl;
        cout << "------------------------" << endl;
        cout << "Masukkan nama lengkap\t: ";
        getline(cin, identitas.nama);
        cout << "Masukkan NIM\t\t: ";
        getline(cin, identitas.nim);

        cout << "\n=============================" << endl;
        cout << "---- IDENTITAS MAHASISWA ----" << endl;
        cout << "=============================" << endl;
        cout << "Nama\t: " << identitas.nama << endl;
        cout << "NIM\t: " << identitas.nim << endl;

        cout << "\nApakah kamu ingin melanjutkannya [y/n]: ";
        cin >> pilihan;

    } while ((pilihan == 'y') || (pilihan == 'Y'));
}

void kasus2P10()
{

    int n, pilihan, akhir = 0;
    char lanjut;
    cout << "\n-------------------------" << endl;
    cout << "Array dalam Data Struktur" << endl;
    cout << "-------------------------" << endl;
    cout << "Masukkan banyaknya Mahasiswa : ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    mahasiswa data[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nData ke - " << i + 1 << endl;
        cout << "|-----------------------------------------------------------|" << endl;
        cout << "| Nama\t: ";
        getline(cin, data[i].nama);
        cout << "| NIM\t: ";
        getline(cin, data[i].nim);
        cout << "| IPK\t: ";
        cin >> data[i].ipk;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "|-----------------------------------------------------------|" << endl;
    }
    cout << "\n-----------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data - " << i + 1 << endl;
        cout << "Nama\t: " << data[i].nama << endl;
        cout << "NIM\t: " << data[i].nim << endl;
        cout << "IPK\t: " << data[i].ipk << endl;
        akhir = akhir + (i+1);
        cout << "\n";
    }
    cout << "-----------------------------------------------------------" << endl;
    cout << akhir << endl;
    cout << "Apakah kamu ingin melanjutkan tahap pengolahan data ? ";
    cin >> lanjut;

    auto pilihan1 = [&]()
    {
        cout << "\nMenampilkan Seluruh Data Mahasiswa" << endl;
        cout << "-----------------------------------------------------------" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Data - " << i + 1 << endl;
            cout << "Nama\t: " << data[i].nama << endl;
            cout << "NIM\t: " << data[i].nim << endl;
            cout << "IPK\t: " << data[i].ipk << endl;
            cout << "\n";
        }
        cout << "-----------------------------------------------------------" << endl;
    };

    auto pilihan2 = [&]()
    {
        cout << "Menambahkan data Mahasiswa" << endl;
        cout << "--------------------------" << endl;
        cout << akhir << endl;
        cout << "Berapa data yang mau ditambahkan : ";
        cin >> n;
        for (int i = akhir + 1; n == i + 1; i++)
        {
            cout << "|-----------------------------------------------------------|" << endl;
            cout << "| Nama\t: ";
            getline(cin, data[i].nama);
            cout << "| NIM\t: ";
            getline(cin, data[i].nim);
            cout << "| IPK\t: ";
            cin >> data[i].ipk;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "|-----------------------------------------------------------|" << endl;
        }
    };

    do
    {
        cout << "\nApa yang ingin diolah data ini? " << endl;
        cout << "1. Tampilkan seluruh data Mahasiswa" << endl;
        cout << "2. Tambahkan data Mahasiswa" << endl;
        cout << "3. Analisa data Mahasiswa" << endl;
        cout << "4. Modifikasi IPK Mahasiswa" << endl;
        cout << "\nPilih salah satu pengolahan data : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            pilihan1();
            break;
        case 2:
            pilihan2();
        default:
            break;
        }
    } while ((lanjut == 'y') || (lanjut == 'Y'));
}

void sistemP10()
{
    int pilihan;
    cout << "\nProgram Tipe Data Struktur" << endl;
    cout << "----------------------------" << endl;
    cout << "1. Pengenalan Data Struktur" << endl;
    cout << "2. Array dalam Data Struktur" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        kasus1P10();
        break;
    case 2:
        kasus2P10();
        break;
    default:
        cout << "Program tidak ditemukan!" << endl;
        break;
    }
}