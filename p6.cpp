#include "p6.h"
#include <iostream>
#include <limits>

using namespace std;

void kasus1P6()
{
    auto soal1P6 = []()
    {
        int n;
        cout << "\nKasus 1 Perulangan atau Looping" << endl;
        cout << "---------------------------------" << endl;
        cout << "Masukkan Perulangan [Hello World] : ";
        cin >> n;
        cout << "-----------------------------------" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Hello World | Loop ke - " << (i + 1) << endl;
        }
        cout << "-----------------------------------" << endl;
    };

    auto soal2P6 = []()
    {
        cout << "\nKasus 2 Deret Angka" << endl;
        cout << "---------------------" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << i << " ";
        }
        cout << "\n-----------------------" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << i << " ";
        }
        cout << "\n-----------------------" << endl;
        for (int i = 10; i >= 0; i--)
        {
            cout << i << " ";
        }
        cout << "\n-----------------------" << endl;
        for (int i = 9; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << "\n-----------------------" << endl;
    };

    soal1P6();
    soal2P6();
}

void kasus2P6()
{
    int a, n, b;
    char pilihan;
    auto soal1P6 = [&]()
    {
        do
        {
            cout << "\nKasus 2a Modifikasi Deret Angka" << endl;
            cout << "---------------------------------" << endl;
            cout << "Input a [Nilai Awal]\t: ";
            cin >> a;
            cout << "Input n [Nilai Deret]\t: ";
            cin >> n;
            cout << "---------------------------------" << endl;
            for (int i = a; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n---------------------------------" << endl;
            cout << "Apakah kamu ingin mengulanginya lagi [y/n] : ";
            cin >> pilihan;
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    auto soal2P6 = [&]()
    {
        do
        {
            cout << "\nKasus 3a Modifikasi Deret Angka Menurun" << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Input a [Nilai Awal]\t: ";
            cin >> a;
            cout << "Input n [Nilai Deret]\t: ";
            cin >> n;
            cout << "-----------------------------------------" << endl;
            if (a > n)
            {
                for (int i = a; i >= n; i--)
                {
                    cout << i << " ";
                }
            }
            else
            {
                cout << "\nNilai N Lebih besar dari Nilai Awal tidak bisa menurunkan" << endl;
            }
            cout << "\n-----------------------------------------" << endl;
            cout << "Apakah kamu ingin mengulanginya lagi [y/n] : ";
            cin >> pilihan;
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    auto soal3P6 = [&]()
    {
        do
        {
            cout << "\nKasus 4 Modifikasi Program Deret" << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Input a [Nilai Awal]\t: ";
            cin >> a;
            cout << "Input n [Nilai Deret]\t: ";
            cin >> n;
            cout << "Input b [Increment]\t: ";
            cin >> b;
            cout << "-----------------------------------------" << endl;
            for (int i = a; i <= n; i += b)
            {
                cout << i << " ";
            }
            cout << "\n-----------------------------------------" << endl;
            cout << "Apakah kamu ingin mengulanginya lagi [y/n] : ";
            cin >> pilihan;
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    soal1P6();
    soal2P6();
    soal3P6();
}

void kasus3P6()
{
    int a, minn = 100000, maxx = 0;
    double avg, sum = 0;
    int pilihan;
    auto soal1P6 = [&]()
    {
        cout << "\nKasus 1 Penjumlahan Deret" << endl;
        cout << "---------------------------" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << i << " ";
            sum = sum + i;
        }
        cout << "\nHasil Penjumlahan : " << sum << endl;
        cout << "---------------------------\n"
             << endl;

        sum = 0;

        cout << "Kasus 1a Penjumlahan Deret" << endl;
        cout << "----------------------------" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Input bilangan ke-" << i << " : ";
            cin >> a;
            sum = sum + a;
        }
        cout << "Hasil Penjumlahan : " << sum << endl;
        cout << "---------------------------" << endl;
    };

    auto soal2P6 = [&]()
    {
        cout << "\nKasus 2 Terbesar dan Terkecil" << endl;
        cout << "-------------------------------" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << i << " ";
            if (i < minn)
            {
                minn = i;
            }
            if (i > maxx)
            {
                maxx = i;
            }
        }
        cout << "\nAngka Terkecil : " << minn << endl;
        cout << "Angka Terbesar : " << maxx << endl;
        cout << "-------------------------------\n"
             << endl;
        minn = 100000;
        a = 0;
        maxx = 0;
        sum = 0;

        cout << "Kasus 2a Modifikasi Kasus 1 & 2" << endl;
        cout << "---------------------------------" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Input bilangan ke-" << i << " : ";
            cin >> a;
            if (a < minn)
            {
                minn = a;
            }
            if (a > maxx)
            {
                maxx = a;
            }
            sum = sum + a;
        }
        cout << "---------------------------------" << endl;
        cout << "\nBilangan Terkecil\t: " << minn << endl;
        cout << "Bilangan Terbesar\t: " << maxx << endl;
        cout << "Hasil Penjumlahan\t: " << sum << endl;
        avg = sum / 5;
        cout << "Rata - Rata\t\t: " << avg << endl;
    };

    auto soal3P6 = []()
    {
        cout << "\nKasus 3 Modifikasi Deret" << endl;
        cout << "--------------------------" << endl;
        for (int i = 1; i <= 10; i++)
        {
            if (i == 2)
            {
                cout << (i * i) << " ";
            }
            else
            {
                cout << i << " ";
            }
        }
    };

    cout << "Kasus dari Modifikasi Input Deret" << endl;
    cout << "---------------------------------" << endl;
    cout << "1. Kasus 1 dan Kasus 1a" << endl;
    cout << "2. Kasus 2 dan Kasus 2a" << endl;
    cout << "3. Kasus 3 Modifikasi Deret\n"
         << endl;
    cout << "Pilih studi kasus : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        soal1P6();
        break;
    case 2:
        soal2P6();
        break;
    case 3:
        soal3P6();
        break;
    default:
        break;
    }
}

void sistemP6()
{
    int pilihan;
    cout << "\n-------------------------------" << endl;
    cout << "Program Perulangan atau Looping" << endl;
    cout << "-------------------------------" << endl;
    do
    {
        cout << "1. Pengenalan Perulangan atau Looping" << endl;
        cout << "2. Modifikasi Deret Matematika Looping" << endl;
        cout << "3. Modifikasi Input Deret Matematika" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            kasus1P6();
            break;
        case 2:
            kasus2P6();
            break;
        case 3:
            kasus3P6();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}
