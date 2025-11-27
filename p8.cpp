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

void kasus2P8()
{
    int n, arr[1];
    char restart;
    do
    {

        cout << "\nProgram Data Array Terbalik" << endl;
        cout << "-----------------------------" << endl;
        cout << "Masukkan panjang Array : ";
        cin >> n;
        cout << "Panjang Array : " << n << " / [ ";
        for (int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "]\n"
             << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Masukkan nilai Array ke - [" << i << "] : ";
            cin >> arr[i];
        }
        cout << "------------------------------\n";
        for (int i = n; i > 0; i--)
        {
            cout << "Nilai Array ke - [" << i - 1 << "] : " << arr[i - 1] << endl;
        }
        cout << endl;
        cout << "Apakah ingin mengulangi program [y/n] : ";
        cin >> restart;
    } while ((restart == 'y') || (restart == 'Y'));
}

void kasus3P8()
{
    int n, arr[1], maxx = 0, minn = 1000000, sum = 0;
    double avg;
    char restart;
    do
    {
        cout << "\nProgram Array Max, Min, Sum, Average" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Masukkan panjang Array : ";
        cin >> n;
        cout << "Panjang Array : " << n << " / [ ";
        for (int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "]\n"
             << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Masukkan nilai Array ke = [" << i << "] : ";
            cin >> arr[i];
        }
        cout << "----------------------------------" << endl;
        cout << "Nilai Array keseluruhan : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxx)
            {
                maxx = arr[i];
            }
            if (arr[i] < minn)
            {
                minn = arr[i];
            }
            sum = arr[i] + sum;
        }
        cout << "\nNilai Max\t: " << maxx << endl;
        cout << "Nilai Min\t: " << minn << endl;
        cout << "Jumlah\t\t: " << sum << endl;
        cout << "Rata-rata\t: " << (avg = sum / n) << endl;
        cout << "\nApakah kamu ingin mengulangi program [y/n] : ";
        cin >> restart;

    } while ((restart == 'y') || (restart == 'Y'));
}

void kasus4P8()
{
    int n, arr[1];
    char restart;
    do
    {
        cout << "\nProgram Array Ganjil Genap" << endl;
        cout << "---------------------------" << endl;
        cout << "Masukkan panjang Array : ";
        cin >> n;
        cout << "Panjang Array : " << n << " / [ ";
        for (int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "]\n"
             << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Masukkan nilai Array ke = [" << i << "] : ";
            cin >> arr[i];
        }
        cout << "----------------------------------" << endl;
        cout << "Nilai Array Genap\t: ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << "\nNilai Array Ganjil\t: ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
        cout << "\nApakah kamu ingin mengulangi program [y/n] : ";
        cin >> restart;
    } while ((restart == 'y') || (restart == 'Y'));
}

void kasus5P8()
{
    int n, arr[1];
    char restart;
    do
    {
        cout << "\nProgram Positif Negatif Ganjil Genap" << endl;
        cout << "------------------------------------" << endl;
        cout << "Masukkan panjang Array : ";
        cin >> n;
        cout << "Panjang Array : " << n << " / [ ";
        for (int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "]\n"
             << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Masukkan nilai Array ke = [" << i << "] : ";
            cin >> arr[i];
        }
        cout << "----------------------------------";
        cout << "\nHasil Data Array Positif Genap\t: ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                if (arr[i] % 2 == 0)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        cout << "\nHasil Data Array Negatif Genap\t: ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                if (arr[i] % 2 == 0)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        cout << "\nHasil Data Array Positif Ganjil\t: ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                if (arr[i] % 2 != 0)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        cout << "\nHasil Data Array Negatif Ganjil\t: ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                if (arr[i] % 2 != 0)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        cout << endl;
        cout << "\nApakah kamu ingin mengulangi program [y/n] : ";
        cin >> restart;
    } while ((restart == 'y') || (restart == 'Y'));
}

void kasus6P8()
{
    char restart;
    int n;
    do
    {
        cout << "\nProgram Array 0 & 1" << endl;
        cout << "-------------------" << endl;
        cout << "Masukkan panjang Array : ";
        cin >> n;
        int arr[1];
        cout << "Hasil Array : ";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = 0;
                cout << arr[i] << " ";
            }
            else if (i % 2 != 0)
            {
                arr[i] = 1;
                cout << arr[i] << " ";
            }
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Nilai Array ke - [" << i << "] : " << arr[i] << endl;
        }
        cout << "\nApakah kamu ingin mengulangi program [y/n] : ";
        cin >> restart;
    } while ((restart == 'y') || (restart == 'Y'));
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
        cout << "5. Nilai Positif/Negatif Ganjil Genap Array" << endl;
        cout << "6. Nilai Array 0 & 1" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            kasus1P8();
            break;
        case 2:
            kasus2P8();
            break;
        case 3:
            kasus3P8();
            break;
        case 4:
            kasus4P8();
            break;
        case 5:
            kasus5P8();
            break;
        case 6:
            kasus6P8();
            break;
        default:
            break;
        }
    } while (pilihan != 0);
}