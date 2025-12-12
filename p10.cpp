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
    int maxData = 100, indexMhsMax, indexMhsMin;
    float maxx = 0, minn = 4, sum = 0, avg;
    mahasiswa identitas[maxData];

    int n, pilihan, allData = 0;

    cout << "\n-------------------------" << endl;
    cout << "Array dalam data Struktur" << endl;
    cout << "-------------------------" << endl;
    cout << "Berapa data Mahasiswa yang ingin diinput : ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;

    if (n > maxData)
    {
        n = maxData;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Informasi Mahasiswa - " << i + 1 << endl;
        cout << "Nama Lengkap\t: ";
        getline(cin, identitas[i].nama);
        cout << "NIM\t\t: ";
        getline(cin, identitas[i].nim);
        cout << "IPK\t\t: ";
        cin >> identitas[i].ipk;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "---------------------------------------------------" << endl;

        allData++;
    }

    auto data = [&]()
    {
        cout << "=== MENAMPILKAN SELURUH DATA ===" << endl;
        for (int i = 0; i < allData; i++)
        {
            cout << "Nama Lengkap\t: " << identitas[i].nama << endl;
            cout << "NIM\t\t: " << identitas[i].nim << endl;
            cout << "IPK\t\t: " << identitas[i].ipk << endl;
            cout << "---------------------------------------------------" << endl;
        }
    };

    auto analisis = [&](){
        cout << "=== ANALISIS DATA MAHASISWA ===" << endl;
        for(int i=0; i<allData; i++){
            if(maxx < identitas[i].ipk){
                maxx = identitas[i].ipk;
                indexMhsMax = i;
            }
            if(minn > identitas[i].ipk){
                minn = identitas[i].ipk;
                indexMhsMin = i;
            }
            sum = sum + identitas[i].ipk;
            avg = (sum / n);
        }
        cout << "Data yang diperoleh setalah analisis adalah " << endl;
        cout << "IPK Tertinggi atas nama \nNama\t: " << identitas[indexMhsMax].nama << endl;
        cout << "IPK\t: " << maxx << endl;
        cout << "----------------------------------------------------------------\n";
        cout << "IPK Terendah atas nama \n Nama\t: " << identitas[indexMhsMin].nama << endl;
        cout << "IPK\t: " << minn << endl;
        cout << "----------------------------------------------------------------\n";
        cout << "Rata-rata IPK keseluruhan\t: " << avg << endl;

    };

    auto modifiasiIpk = [&](){
        int dataMhs;
        float nilaiMhs;
        data();
        cout << "=== MODIFIKASI DATA IPK MAHASISWA ===" << endl;
        cout << "Pilih salah satu mahasiswa yaa : "; cin >> dataMhs;
        dataMhs = dataMhs - 1;
        cout << "Masukkan nilai terbaru | " << identitas[dataMhs].nama << " : "; cin >> nilaiMhs;
        identitas[dataMhs].ipk = nilaiMhs;

        cout << "\n---------------------------------------------------------------\n";
        cout << "Nama\t: " << identitas[dataMhs].nama << endl;
        cout << "IPK\t: " << identitas[dataMhs].ipk << endl;
    };

    if (allData == n)
    {
        cout << allData << " Data Berhasil disimpan";
        cout << "\n---------------------------------------------------\n"
             << endl;
    }
    else
    {
        cout << "Data gagal disimpan";
    }
    do
    {
        cout << "\nSilahkan pilih salah satu tindakan dibawah" << endl;
        cout << "1. Menampilkan seluruh data Mahasiswa" << endl;
        cout << "2. Analisa seluruh data Mahasiswa" << endl;
        cout << "3. Memodifiasi data IPK Mahasiswa" << endl;
        cout << "\nPilih salah satu :";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            data();
            break;
        case 2:
            analisis();
            break;
        case 3:
            modifiasiIpk();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
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