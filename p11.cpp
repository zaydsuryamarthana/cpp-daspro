#include <iostream>
#include "p11.h"
#include <limits>
#include <math.h>

using namespace std;

int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return b;
    }
}

int max3(int a, int b, int c)
{
    if (a > b)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int max4(int a, int b, int c, int d)
{
    if (a > b)
    {
        return a;
    }
    else if (c > d)
    {
        return c;
    }
    else if (b > d)
    {
        return b;
    }
    else
    {
        return d;
    }
}

bool isGanjil(int a)
{
    if (a % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int hasilPangkat(int a, int pangkat)
{
    int hasil = 1;
    for (int i = 1; i <= pangkat; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

int sumOf(int n)
{
    int hasil = 0;
    for (int i = 0; i <= n; i++)
    {
        hasil = i + hasil;
    }
    return hasil;
}

int productOf(int n)
{
    int hasil = 1;
    for (int i = 1; i <= n; i++)
    {
        hasil = i * hasil;
    }
    return hasil;
}

float avgSumOf(float n)
{
    float hasil = 0, avg;
    for (int i = 0; i <= n; i++)
    {
        hasil = i + hasil;
        avg = hasil / n;
    }
    return avg;
}

float avgProdOf(float n)
{
    float hasil = 1, avg;
    for (int i = 1; i <= n; i++)
    {
        hasil = i * hasil;
        avg = hasil / n;
    }
    return avg;
}

float c2f(float celcius)
{
    celcius = (9.0 / 5.0) * celcius + 32;
    return celcius;
}

float c2k(float celcius)
{
    celcius = celcius + 273;
    return celcius;
}

float c2r(float celcius)
{
    celcius = (4.0 / 5.0) * celcius;
    return celcius;
}

void kasus1P11()
{
    int pilihan, a, b, c, d, n, pangkat;
    float celcius;
    char restart;

    auto soal1 = [&]()
    {
        do
        {
            cout << "\nNilai Maksimal dari suatu bilangan" << endl;
            cout << "----------------------------------" << endl;
            cout << "Masukkan nilai a : ";
            cin >> a;
            cout << "Masukkan nilai b : ";
            cin >> b;
            cout << "Masukkan nilai c : ";
            cin >> c;
            cout << "Masukkan nilai d : ";
            cin >> d;
            cout << "-----------------------------------" << endl;
            cout << "Nilai max dari A, B adalah\t\t: " << max2(a, b) << endl;
            cout << "Nilai max dari A, B, C adalah\t\t: " << max3(a, b, c) << endl;
            cout << "Nilai max dari A, B, C, D adalah\t: " << max4(a, b, c, d) << endl;
            cout << "\nApakah kamu ingin mengulanginya lagi : ";
            cin >> restart;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while ((restart == 'y') || (restart == 'Y'));
    };

    auto soal2 = [&]()
    {
        int data;
        do
        {
            cout << "\nNilai Ganjil, Genap dan Pangkat" << endl;
            cout << "-------------------------------" << endl;
            cout << "Masukkan Nilai Basis\t: ";
            cin >> a;
            cout << "Masukkan Nilai Eksponen\t: ";
            cin >> pangkat;
            cout << "-------------------------------" << endl;
            cout << "Hasil dari Nilai pangkat adalah\t\t: " << (data = hasilPangkat(a, pangkat)) << endl;
            cout << "Hasil dari Nilai pangkat berupa angka\t: " << (isGanjil(data) == false ? "Bilangan Genap" : "Bilangan Ganjil") << endl;
            cout << "\nApakah kamu ingin mengulanginya lagi : ";
            cin >> restart;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while ((restart == 'y') || (restart == 'Y'));
    };

    auto soal3 = [&]()
    {
        do
        {
            cout << "\nNilai 3 of Sum, Product, Avg" << endl;
            cout << "----------------------------" << endl;
            cout << "Masukkan dari nilai nya : ";
            cin >> n;
            cout << "----------------------------------------------------" << endl;
            cout << "Nilai dari Penjumlahan bilangan\t\t: " << sumOf(n) << endl;
            cout << "Nilai dari Perkalian bilangan\t\t: " << productOf(n) << endl;
            cout << "Nilai dari Rata-Rata Penjumlahan\t: " << avgSumOf(n) << endl;
            cout << "Nilai dari Rata-Rata Perkalian\t\t: " << avgProdOf(n) << endl;
            cout << "\nApakah kamu ingin mengulanginya lagi : ";
            cin >> restart;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while ((restart == 'y') || (restart == 'Y'));
    };

    auto soal4 = [&]()
    {
        do
        {
            cout << "\nNilai Konversi Suhu" << endl;
            cout << "-------------------" << endl;
            cout << "Masukkan Suhu Celcius : ";
            cin >> celcius;
            cout << "-------------------------------" << endl;
            cout << "Konversi suhu ke Farenheit\t: " << c2f(celcius) << endl;
            cout << "Konversi suhu ke Kelvin\t\t: " << c2k(celcius) << endl;
            cout << "Konversi suhu ke Reamur\t\t: " << c2r(celcius) << endl;
            cout << "\nApakah kamu ingin mengulanginya lagi : ";
            cin >> restart;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while ((restart == 'y') || (restart == 'Y'));
    };

    do
    {
        cout << "\nStudi Kasus Fungsi Matematika" << endl;
        cout << "-----------------------------" << endl;
        cout << "1. Nilai Maksimal dari suatu bilangan" << endl;
        cout << "2. Nilai Ganjil, Genap & Pangkat" << endl;
        cout << "3. Nilai 3 of Sum, Product, Avg" << endl;
        cout << "4. Nilai Konversi suhu" << endl;
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
        default:
            break;
        }
    } while (pilihan != 0);
}

void kasus2P11()
{
    cout << "" << endl;
}

void sistemP11()
{
    int pilihan;
    do
    {
        cout << "\n----------------------------" << endl;
        cout << "Program Function atau Fungsi" << endl;
        cout << "----------------------------" << endl;
        cout << "1. Fungsi Matematika" << endl;
        cout << "2. Pengolahan Data" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            kasus1P11();
            break;
        case 2:
            kasus2P11();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}
