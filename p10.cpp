#include "p10.h"
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

typedef struct data
{
    string nama, nim;
    int umur, tahun;
    float ipk;
} mahasiswa;

typedef struct nilai
{
    int x, y;
} koordinat;

void tampilXY(int n1, int n2)
{
    cout << "\nMenggunakan Prosedur - Menampilkan Data" << endl;
    cout << "Nilai dari data struktur X : " << n1 << endl;
    cout << "Nilai dari data struktur Y : " << n2 << endl;
}

void tampilMahasiswa(string nama, string nim, int umur, int tahun, float ipk)
{
    cout << "\nMenampilkan Identitas Mahasiswa" << endl;
    cout << "Nama\t\t: " << nama << endl;
    cout << "NIM\t\t: " << nim << endl;
    cout << "Umur\t\t: " << umur << " Tahun" << endl;
    cout << "Tahun Lulus\t: " << tahun << endl;
    cout << "IPK\t\t: " << ipk << endl;
}

int passByValue(int n)
{
    n = n + 5;
    return n;
}

int passByReference(int &n)
{
    n = n + 5;
    return n;
}

typedef struct structValueReference
{
    int x, y;
} dataStruct;

void passByReferenceStruct(dataStruct &data)
{
    data.x = 50;
    data.y = 100;
}

void passByValueStruct(dataStruct data)
{
    data.x = 50;
    data.y = 100;
}

void kasus1P10()
{
    int pilihan, nilai;
    koordinat n1;
    mahasiswa data;

    auto soal1 = [&]()
    {
        cout << "\nData Struktur & Function" << endl;
        cout << "------------------------" << endl;
        cout << "Menampilkan data struktur - X & Y" << endl;

        n1.x = 5;
        n1.y = 4;

        cout << "Nilai dari data X adalah : " << n1.x << endl;
        cout << "Nilai dari data Y adalah : " << n1.y << endl;

        tampilXY(n1.x, n1.y);
    };

    auto soal2 = [&]()
    {
        cout << "\nData Struktur & Function 2" << endl;
        cout << "------------------------" << endl;
        cout << "Memberikan parameter ke dalam function" << endl;

        data.nama = "Zayd Surya Marthana";
        data.nim = "A11.2025.16417";
        data.umur = 19;
        data.tahun = 2026;
        data.ipk = 4.0;

        tampilMahasiswa(data.nama, data.nim, data.umur, data.tahun, data.ipk);
    };

    auto soal3 = [&]()
    {
        nilai = 10;
        // INGAT KALAAAUU SI REFRENCES MENGUBAH NILAI PARAMETER, kebalikannya si value hanya salin
        cout << "\nPass by Value & References" << endl;
        cout << "--------------------------" << endl;
        cout << "Membandingkan function dengan parameter Value / Reference" << endl;
        cout << "\nHasil dari Pass By Value : ";
        cout << passByValue(nilai) << endl;
        cout << "Parameter atau nilai variabel : " << nilai << endl;
        cout << "\nHasil dari Pass By Reference : ";
        cout << passByReference(nilai) << endl;
        cout << "Parameter atau nilai variabel : " << nilai << endl;
    };

    auto soal4 = [&]()
    {
        dataStruct data;

        data.x = 20;
        data.y = 10;

        cout << "\nPass By Value & Reference Struct" << endl;
        cout << "--------------------------------" << endl;
        cout << "Memasukkan nilai parameter Value";
        passByValueStruct(data);
        cout << "\nHasil Parameter asli : " << data.x << " & " << data.y << endl;
        cout << "Memasukkan nilai parameter Reference";
        passByReferenceStruct(data);
        cout << "\nHasil Parameter asli : " << data.x << " & " << data.y << endl;
    };

    do
    {
        cout << "\n------------------------" << endl;
        cout << "Pengenalan Data Struktur" << endl;
        cout << "------------------------" << endl;
        cout << "1. Data Struktur & Function" << endl;
        cout << "2. Data Struktur & Function 2" << endl;
        cout << "3. Function Pass By Value & References" << endl;
        cout << "4. Function Pass By Value & References Struct" << endl;
        cout << "\nPilih salah satu studi kasus : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            soal1();
            break;
        case 2:
            soal2();
            break;
        case 3:
            soal3();
            break;
        case 4:
            soal4();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}

void kasus2P10()
{
    char pilihan;
    mahasiswa identitas;
    do
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n------------------------" << endl;
        cout << "Implementasi Data Struktur" << endl;
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

void kasus3P10()
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

    auto analisis = [&]()
    {
        cout << "=== ANALISIS DATA MAHASISWA ===" << endl;
        for (int i = 0; i < allData; i++)
        {
            if (maxx < identitas[i].ipk)
            {
                maxx = identitas[i].ipk;
                indexMhsMax = i;
            }
            if (minn > identitas[i].ipk)
            {
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

    auto modifiasiIpk = [&]()
    {
        int dataMhs;
        float nilaiMhs;
        data();
        cout << "=== MODIFIKASI DATA IPK MAHASISWA ===" << endl;
        cout << "Pilih salah satu mahasiswa yaa : ";
        cin >> dataMhs;
        dataMhs = dataMhs - 1;
        cout << "Masukkan nilai terbaru | " << identitas[dataMhs].nama << " : ";
        cin >> nilaiMhs;
        identitas[dataMhs].ipk = nilaiMhs;

        cout << "\n---------------------------------------------------------------\n";
        cout << "Nama\t: " << identitas[dataMhs].nama << endl;
        cout << "IPK\t: " << identitas[dataMhs].ipk << endl;
    };

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
    cout << "2. Implementasi Data Struktur" << endl;
    cout << "3. Array dalam Data Struktur" << endl;
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
    case 3:
        kasus3P10();
        break;
    default:
        cout << "Program tidak ditemukan!" << endl;
        break;
    }
}