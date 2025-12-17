#include <iostream>
#include <limits>
#include "p12.h"
#include "math.h"
using namespace std;

void sistemP12()
{
    koordinat titikA, titikB;
    float a, b;
    cout << "\n--------------------------------------" << endl;
    cout << "Program Function Prosedur & Data Structure" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Membuat koordinat pada titik A"
         << endl;
    cout << "Masukkan titik koordinat pada sumbu X : ";
    cin >> a;
    cout << "Masukkan titik koordinat pada sumbu Y : ";
    cin >> b;
    createKoordinat(titikA, a, b);

    hiasanProgram();

    cout << "Titik Koordinat A : ";
    getKoordinat(titikA);

    cout << "\nKeterangan Titik Koordinat A" << endl;
    cout << readAbsis(titikA) << " Adalah titik Absis" << endl;
    cout << readOrdinat(titikA) << " Adalah titik Ordinat" << endl;
}

void hiasanProgram()
{
    cout << "--------------------------------------" << endl;
}

void createKoordinat(koordinat &titik, float absis, float ordinat)
{
    titik.x = absis;
    titik.y = ordinat;
}

void getKoordinat(koordinat titik)
{
    cout << "(" << titik.x << "," << titik.y << ")" << endl;
}

float readAbsis(koordinat titik)
{
    return titik.x;
}

float readOrdinat(koordinat titik)
{
    return titik.y;
}