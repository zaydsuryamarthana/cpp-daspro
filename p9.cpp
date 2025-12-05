#include <iostream>
#include <limits>
#include "p9.h"

using namespace std;
void kasus1P9()
{
    int arr[3][3] = {{2, 10, 5}, {7, 1, 3}, {6, 4, 2}};
    cout << "\n----------------" << endl;
    cout << "Program Array 2D" << endl;
    cout << "----------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void kasus2P9()
{
    int baris, kolom;
    cout << "\n------------------" << endl;
    cout << "Array 2D Modifiasi" << endl;
    cout << "------------------" << endl;
    cout << "Masukkan nilai baris : ";
    cin >> baris;
    cout << "Masukkan nilai kolom : ";
    cin >> kolom;

    cout << endl;

    int arr[baris][kolom];

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan nilai Matriks " << "[ " << i << " ][ " << j << " ] ";
            cin >> arr[i][j];
        }
    }

    cout << "\nHasil Matriks seperti dibawah ini : " << endl;

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nDetail Nilai pada Matriks" << endl;
    cout << "--------------------------" << endl;
    cout << "Masukkan Baris ke - ";
    cin >> baris;
    cout << "Masukkan Kolom ke - ";
    cin >> kolom;

    cout << "\nNilai matriks ialah " << arr[baris][kolom] << endl;
}

void kasus3P9()
{
    int baris, kolom;
    cout << "\n----------------" << endl;
    cout << "Matriks Transpose" << endl;
    cout << "----------------" << endl;
    cout << "Masukkan nilai baris : ";
    cin >> baris;
    cout << "Masukkan nilai kolom : ";
    cin >> kolom;

    cout << endl;

    int arr[baris][kolom];
    int transpose[kolom][baris];

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan nilai Matriks [ " << i << " ][ " << j << " ] ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "\nHasil Matriks adalah" << endl;
    cout << "----------------------" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }

    cout << "\nHasil Matriks Transpose adalah" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < kolom; i++)
    {
        for (int j = 0; j < baris; j++)
        {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
}

void sistemP9()
{
    int pilihan;
    cout << "Program Dimensi Array" << endl;
    cout << "---------------------" << endl;
    cout << "1. Array 2D" << endl;
    cout << "2. Array 2D Modifikasi" << endl;
    cout << "3. Akses Elemen Array 2D" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        kasus1P9();
        break;
    case 2:
        kasus2P9();
        break;
    case 3:
        kasus3P9();
        break;
    default:
        cout << "Tidak ditemukan program kamu!";
        break;
    }
}
