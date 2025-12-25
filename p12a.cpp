#include <iostream>
#include "p12a.h"
#include <limits>

using namespace std;

typedef struct dataMahasiswa
{
    string nim, nama;
    float ipk;
} mahasiswa;

void inputMahasiswa(mahasiswa identitas[], int n)
{
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
    }
}

void getAllMahasiswa(mahasiswa identitas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nama Lengkap\t: " << identitas[i].nama << endl;
        cout << "NIM\t\t: " << identitas[i].nim << endl;
        cout << "IPK\t\t: " << identitas[i].ipk << endl;
        cout << "---------------------------------------------------" << endl;
    }
}

void analisaMahasiswa(mahasiswa identitas[], int n)
{
    int indexMhsMin, indexMhsMax; 
    float maxx = 0, minn = 4, sum = 0;
    float avg = 0;
    for (int i = 0; i < n; i++)
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
    cout << "IPK Tertinggi atas nama \nNama\t: " << identitas[indexMhsMax].nama << endl;
    cout << "IPK\t: " << maxx << endl;
    cout << "----------------------------------------------------------------\n";
    cout << "IPK Terendah atas nama \nNama\t: " << identitas[indexMhsMin].nama << endl;
    cout << "IPK\t: " << minn << endl;
    cout << "----------------------------------------------------------------\n";
    cout << "Rata-rata IPK keseluruhan\t: " << avg << endl;
}

void modifikasiMahasiswa(mahasiswa identitas[], int dataMhs)
{
    float nilaiMhs;
    cout << "Identitas Mahasiswa ID : " << dataMhs;

    dataMhs = dataMhs - 1;

    cout << "\nNama\t: " << identitas[dataMhs].nama << endl;
    cout << "IPK\t: " << identitas[dataMhs].ipk << endl;
    cout << "\nMasukkan IPK terbaru : ";
    cin >> nilaiMhs;

    identitas[dataMhs].ipk = nilaiMhs;

    cout << "\nPerubahan IPK pada Data Mahasiswa" << endl;
    cout << "Nama\t\t: " << identitas[dataMhs].nama << endl;
    cout << "IPK Baru\t: " << identitas[dataMhs].ipk << endl;
}

void kasus1P12a()
{
    cout << "Perbaikan" << endl;
}

void kasus2P12a()
{
    int n, tindakan, dataMhs = 0;
    int maxData = 100;
    mahasiswa identitas[maxData];

    cout << "Berapa data Mahasiswa yang ingin diinput : ";
    cin >> n;
    inputMahasiswa(identitas, n);

    do
    {
        cout << "\nMenu Program Data Mahasiswa UDINUS" << endl;
        cout << "----------------------------------" << endl;
        cout << "1. Menampilkan Seluruh Data Mahasiswa" << endl;
        cout << "2. Analisa IPK Seluruh Data Mahasiswa" << endl;
        cout << "3. Modifikasi IPK Data Mahasiswa" << endl;
        cout << "\nPilih salah satu tindakan program : ";
        cin >> tindakan;
        switch (tindakan)
        {
        case 1:
            cout << "\nProgram Menampilkan Seluruh Data Mahasiswa" << endl;
            cout << "------------------------------------------" << endl;
            getAllMahasiswa(identitas, n);
            break;
        case 2:
            cout << "\nAnalisa IPK Seluruh Data Mahasiswa" << endl;
            cout << "----------------------------------" << endl;
            analisaMahasiswa(identitas, n);
            break;
        case 3:
            cout << "\nModifikasi IPK Data Mahasiswa" << endl;
            cout << "-----------------------------" << endl;
            cout << "Masukkan ID Mahasiswa UDINUS : ";
            cin >> dataMhs;
            modifikasiMahasiswa(identitas, dataMhs);
            break;
        default:
            break;
        }

    } while (tindakan != 0);
}
void sistemP12a()
{
    int pilihan;
    do
    {
        cout << "\n--------------------------------------" << endl;
        cout << "Implementasi Data Struct pada Function" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Program Data Struct Sederhana" << endl;
        cout << "2. Program ADT Mahasiswa" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            kasus1P12a();
            break;
        case 2:
            kasus2P12a();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}
