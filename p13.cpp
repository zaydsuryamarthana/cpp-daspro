#include <iostream>
#include "p13.h"
#include <limits>

using namespace std;

void kasus1P13()
{
    int a, b;
    cout << "\nKasus Perkalian Rekursif" << endl;
    cout << "------------------------" << endl;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    cout << "\nHasil dari perkalian " << a << " * " << b << " adalah : " << perkalianRekursif(a, b) << endl;
}

void kasus2P13()
{
    int a, pangkat;
    cout << "\nKasus Pangkat Rekursif" << endl;
    cout << "----------------------" << endl;
    cout << "Masukkan nilai a\t: ";
    cin >> a;
    cout << "Masukkan nilai pangkat\t: ";
    cin >> pangkat;
    cout << "\nHasil dari nilai " << a << "^" << pangkat << " adalah :" << pangkatRekursif(a, pangkat) << endl;
}

void kasus3P13()
{
    int a;
    cout << "\nKasus Faktorial Rekursif" << endl;
    cout << "----------------------" << endl;
    cout << "Masukkan nilai faktorial : ";
    cin >> a;
    cout << "\nHasil dari nilai " << a << "! adalah : " << faktorialRekursif(a) << endl;
}

void kasus4P13()
{
    int a;
    cout << "\nKasus Barisan Fibonacci Rekursif" << endl;
    cout << "--------------------------------" << endl;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "\nHasil dari nilai Fibonacci adalah : " << fibonacciRekursif(a) << endl;
}

void kasus5P13()
{
    int a, pembagian;
    cout << "\nKasus Bilangan Prima Rekursif" << endl;
    cout << "-----------------------------" << endl;
    cout << "Masukkan nilai a\t: ";
    cin >> a;
    cout << "Masukkan pembagian\t: ";
    cin >> pembagian;
    cout << "\nHasil dari bilangan prima " << a << " adalah : " << bilanganPrima(a, pembagian) << endl;
}

void kasus6P13()
{
    int data[] = {1, 3, 4};
    int sizeData = sizeof(data) / sizeof(data[0]);
    cout << "Hasil dari Sum Array adalah : " << arraySumRekursif(data, sizeData) << endl;
    arrayPrintRekursif(data, 0, sizeData);
}
void sistemP13()
{
    int pilihan;
    do
    {
        cout << "\n-------------------------------" << endl;
        cout << "Program Rekursif Penyerdahanaan" << endl;
        cout << "-------------------------------" << endl;
        cout << "1. Perkalian Rekursif" << endl;
        cout << "2. Pangkat Rekursif" << endl;
        cout << "3. Faktorial Rekursif" << endl;
        cout << "4. Barisan Fibonacci Rekursif" << endl;
        cout << "5. Bilangan Prima Rekursif" << endl;
        cout << "6. Array & Print Array Rekursif" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            kasus1P13();
            break;
        case 2:
            kasus2P13();
            break;
        case 3:
            kasus3P13();
            break;
        case 4:
            kasus4P13();
            break;
        case 5:
            kasus5P13();
            break;
        case 6:
            kasus6P13();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}

int perkalianRekursif(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a + perkalianRekursif(a, b - 1);
    }
}
int pangkatRekursif(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a * pangkatRekursif(a, b - 1);
    }
}
int faktorialRekursif(int a)
{
    if (a == 1)
    {
        return a;
    }
    else
    {
        return a * faktorialRekursif(a - 1);
    }
}
int fibonacciRekursif(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciRekursif(a - 1) + fibonacciRekursif(a - 2);
    }
}
int bilanganPrima(int a, int b)
{
    if (b == a)
    {
        return 1;
    }
    else if (b % a == 0)
    {
        return 0;
    }
    else
    {
        return bilanganPrima(a + 1, b);
    }
}
int arraySumRekursif(int data[], int size)
{
    if (size <= 0)
        return 0;
    else
        return arraySumRekursif(data, size - 1) + data[size - 1];
}
void arrayPrintRekursif(int data[], int start, int size)
{
    if (start == size)
        return;
    else
    {
        cout << data[start] << " ";
        arrayPrintRekursif(data, start + 1, size);
    }
}