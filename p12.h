#ifndef P12_H
#define P12_H

#include <iostream>
using namespace std;

void sistemP12();

typedef struct fungsi
{
    float x, y;
} koordinat;

void hiasanProgram();
void createKoordinat(koordinat &titik, float absis, float ordinat);
void inputKoordinat(koordinat &titik, float absis, float ordinat);
void getKoordinat(koordinat titik);
float readAbsis(koordinat titik);
float readOrdinat(koordinat titik);

#endif