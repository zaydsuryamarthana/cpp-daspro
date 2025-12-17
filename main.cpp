#include <iostream>
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include "p5.h"
#include "p6.h"
#include "p7.h"
#include "p8.h"
#include "p9.h"
#include "p10.h"
#include "p11.h"
#include "p12.h"
#include "simulasi.h"
#include <limits>

using namespace std;

int main()
{
    int pilihan;
    do
    {
        cout << "\n--------------------------------------" << endl;
        cout << "PROGRAM PEMBELAJARAN C++ | UDINUS 2025" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Pertemuan 1 : Pengenalan C++" << endl;
        cout << "2. Pertemuan 2 : Tipe Data" << endl;
        cout << "3. Pertemuan 3 : Variabel dan Logika" << endl;
        cout << "4. Pertemuan 4 : Analisis If Else" << endl;
        cout << "5. Pertemuan 5 : Analisis Kondisi Advanced" << endl;
        cout << "6. Pertemuan 6 : Looping For While Do" << endl;
        cout << "7. Pertemuan 7 : Nested Looping" << endl;
        cout << "8. Pertemuan 8 : Array" << endl;
        cout << "9. Pertemuan 9 : Dimensi Array" << endl;
        cout << "10. Pertemuan 10 : Tipe Data Struktur" << endl;
        cout << "11. Pertemuan 11 : Function atau Fungsi" << endl;
        cout << "12. Pertemuan 12 : Prosedur" << endl;
        cout << "0. Latihan UTS : Simulasi UTS Daspro C++" << endl;
        cout << "\nPilih salah satu pembelajaran C++ : ";
        cin >> pilihan;
        cout << '\n';
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (pilihan)
        {
        case 1:
            sistemP1();
            break;
        case 2:
            sistemP2();
            break;
        case 3:
            sistemP3();
            break;
        case 4:
            sistemP4();
            break;
        case 5:
            sistemP5();
            break;
        case 6:
            sistemP6();
            break;
        case 7:
            sistemP7();
            break;
        case 8:
            sistemP8();
            break;
        case 9:
            sistemP9();
            break;
        case 10:
            sistemP10();
            break;
        case 11:
            sistemP11();
            break;
        case 12:
            sistemP12();
            break;
        case 0:
            simulasi();
            break;
        default:
            cout << "Input Tidak Valid, Program dihentikan";
            break;
        }
    } while (pilihan != 0);
    return 0;
}
