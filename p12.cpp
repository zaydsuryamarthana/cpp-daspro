#include <iostream>
#include <limits>
#include "p12.h"
#include "math.h"
using namespace std;

void sistemP12()
{
    float a,b;
    koordinat titikA, titikB;
    cout << "\n--------------------------------------" << endl;
    cout << "Program Function Prosedur & Data Structure" << endl;
    cout << "------------------------------------------" << endl;
    inputKoordinat(titikA);

    cout << '\n';

    cout << "Titik Koordinat A : ";
    getKoordinat(titikA);

    cout << "\nKeterangan Titik Koordinat A" << endl;
    cout << readAbsis(titikA) << " Adalah titik Absis" << endl;
    cout << readOrdinat(titikA) << " Adalah titik Ordinat" << endl;

    cout << '\n';

    cout << "Set Absis Titik Koordinat A (4)" << endl;
    cout << "Set Ordinat Titik Koordinat A (9)" << endl;
    setAbsis(titikA, 0);
    setOrdinat(titikA, 9);
    cout << "Titik Baru A adalah : ";
    getKoordinat(titikA);

    cout << '\n';

    cout << "Apakah Titik Koordinat Baru adalah Origin (0,0) ?" << endl;
    cout << "Jawabannya adalah : " << isOrigin(titikA) << endl;
    cout << "Apakah di Titik X : " << isOnTitikX(titikA) << endl;
    cout << "Apakah di Titik Y : " << isOnTitikY(titikA) << endl;

    cout << '\n';
    hiasanProgram();

    inputKoordinat(titikB);

    cout << '\n';

    cout << "Titik Koordinat B : ";
    getKoordinat(titikB);

    cout << "\nKeterangan Titik Koordinat B" << endl;
    cout << readAbsis(titikB) << " Adalah titik Absis" << endl;
    cout << readOrdinat(titikB) << " Adalah titik Ordinat" << endl;

    cout << '\n';

    cout << "Apakah Titik Koordinat B adalah Origin (0,0) ?" << endl;
    cout << "Jawabannya adalah : " << isOrigin(titikB) << endl;
    cout << "Kuadran Koordinat : " << isKuadran(titikB) << endl;

    cout << '\n';

    cout << "Titik Koordinat selanjutnya dari Titik B" << endl;
    cout << "Titik Sumbu X : ";
    nextX(titikB);
    getKoordinat(titikB);
    cout << "Titik Sumbu Y : ";
    nextY(titikB);
    getKoordinat(titikB);

    cout << '\n';

    cout << "Default pada Titik Koordinat B\t: ";
    getKoordinat(titikB);
    cout << "Cermin pada Titik Koordinat B\t: ";
    mirrorTitik(titikB);

    cout << '\n';

    cout << "\nMasukkan Pergeseran Titik Koordinat B dibawah ini!" << endl;
    cout << "Titik Sumbu X : "; cin >> a;
    cout << "Titik Sumbu Y : "; cin >> b;
    geserTitik(titikB, a, b);

    cout << '\n';

    cout << "\nJarak Akhir antar kedua titik A dan B" << endl;
    cout << "Titik Koordinat A : ";
    getKoordinat(titikA);
    cout << "Titik Koordinat B : ";
    getKoordinat(titikB);
    cout << "Pusat Titik Koordinat A adalah\t\t: " << jarakTitikPusat(titikA) << endl;
    cout << "Pusat Titik Koordinat B adalah\t\t: " << jarakTitikPusat(titikB) << endl;
    cout << "Jarak antara Dua Koordinat A dan B\t: " << jarakDuaTitik(titikA, titikB) << endl;
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

void setOrdinat(koordinat &titik, float n)
{
    titik.y = n;
}

void setAbsis(koordinat &titik, float n)
{
    titik.x = n;
}

bool isOrigin(koordinat titik)
{
    if ((titik.x == 0) && (titik.y == 0))
        return true;
    return false;
}

bool isOnTitikX(koordinat titik)
{
    if (titik.x == 0)
        return true;
    return false;
}

bool isOnTitikY(koordinat titik)
{
    if (titik.y == 0)
        return true;
    return false;
}

void inputKoordinat(koordinat &titik)
{
    float a, b;
    cout << "\nMembuat Koordinat Baru"
         << endl;
    cout << "Masukkan titik koordinat pada sumbu X : ";
    cin >> a;
    cout << "Masukkan titik koordinat pada sumbu Y : ";
    cin >> b;

    titik.x = a;
    titik.y = b;
}

int isKuadran(koordinat titik)
{
    int kuadran = 0;
    if (titik.x && titik.y > 0)
    {
        kuadran = 1;
    }
    else if ((titik.x < 0) && (titik.y > 0))
    {
        kuadran = 2;
    }
    else if ((titik.x < 0) && (titik.y < 0))
    {
        kuadran = 3;
    }
    else
    {
        kuadran = 4;
    }
    return kuadran;
}

void nextX(koordinat &titik)
{
    titik.x = titik.x + 1;
}

void nextY(koordinat &titik)
{
    titik.y = titik.y + 1;
}

float jarakDuaTitik(koordinat titikA, koordinat titikB)
{
    float hasil = 0;
    hasil = sqrt(pow((titikB.x - titikA.x), 2) + pow((titikB.y - titikA.y), 2));
    return hasil;
}

void mirrorTitik(koordinat titik){
    titik.x = titik.x * -1;
    titik.y = titik.y * -1;

    cout << "(" << titik.x << "," << titik.y << ")";
}

void geserTitik(koordinat &titik, float x, float y){
    titik.x = titik.x + x;
    titik.y = titik.y + y;

    cout << "Hasil Pergeseran Koordinat B : (" << titik.x << "," << titik.y << ")";
}

float jarakTitikPusat(koordinat titik){
    float hasil = 0;
    hasil = sqrt(pow((0 - titik.x),2) + (pow((0 - titik.y),2)));
    return hasil;
}