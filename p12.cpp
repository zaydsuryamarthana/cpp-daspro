#include <iostream>
#include <limits>
#include "p12.h"
#include "math.h"

using namespace std;

typedef struct koordinat
{
    float x, y;
} fungsi;

// Simbol " & " disebut juga sebagai " Refrensi " yaitu modifikasi
// variabel yang dilewatkan ke fungsi atau prosedur
void makePoint(fungsi &t, float absis, float ordinat)
{
    t.x = absis;
    t.y = ordinat;
}

void formatPoint(fungsi t)
{
    cout << "(" << t.x << "," << t.y << ")";
}

void garisPoint()
{
    cout << "\n------------------------\n";
}

void inputSumbu(fungsi &t)
{
    cout << "Masukkan titik X : ";
    cin >> t.x;
    cout << "Masukkan titik Y : ";
    cin >> t.y;
}

float getAbsis(fungsi t){
    return t.x;
}

float getOrdinat(fungsi t){
    return t.y;
}

float jarakTitik(float x1, float x2, float y1, float y2){
    float hasil = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    return hasil;
}


void sistemP12()
{
    fungsi titik;
    fungsi titikB;
    float a, b;
    cout << "Program Prosedur Fungsi" << endl;
    cout << "-----------------------" << endl;
    cout << "Masukkan titik X : ";
    cin >> a;
    cout << "Masukkan titik Y : ";
    cin >> b;

    titik.x = a;
    titik.y = b;

    makePoint(titik, a, b);
    cout << "Titik A adalah : ";
    formatPoint(titik);

    garisPoint();

    inputSumbu(titikB);
    cout << "Titik B adalah : ";
    formatPoint(titikB);

    garisPoint();

    cout << "Titik A sebagai berikut" << endl;
    cout << getAbsis(titik) << " Adalah titik sumbu X" << endl;
    cout << getOrdinat(titik) << " Adalah titik sumbu Y";

    garisPoint();

    cout << "Jarak antara dua titik antara A dan B sebagai berikut" << endl;
    cout << jarakTitik(titikB.x, titik.x, titikB.y, titik.y);

}

