#include "p8.h"
#include <iostream>
#include <limits>

using namespace std;

void kasus1P8()
{
    int n, arr[5];
    cout << "\nProgram Data Array" << endl;
    cout << "------------------" << endl;
    cout << "Masukkan panjang Array : ";
    cin >> n;
    cout << "Panjang Array adalah : " << n << " / [ ";
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    cout << "]\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai array ke - " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "--------------------------------------";
    for (int i = 0; i < n; i++)
    {
        cout << "Nilai dari index [" << i << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------------\n";
}

void sistemP8()
{
    int pilihan;
    cout << "\n------------------" << endl;
    cout << "Program Data Array" << endl;
    cout << "------------------" << endl;
    do
    {
        cout << "1. Nilai Array" << endl;
        cout << "2. Nilai Array Terbalik" << endl;
        cout << "3. Nilai Max, Min, Sum & Average Array" << endl;
        cout << "4. Nilai Ganjil & Genap Array" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            kasus1P8();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}