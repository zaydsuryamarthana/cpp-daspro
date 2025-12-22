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
void inputKoordinat(koordinat &titik);
void getKoordinat(koordinat titik);
float readAbsis(koordinat titik);
float readOrdinat(koordinat titik);
void setOrdinat(koordinat &titik, float n);
void setAbsis(koordinat &titik, float n);
bool isOrigin(koordinat titik);
bool isOnTitikX(koordinat titik);
bool isOnTitikY(koordinat titik);
int isKuadran(koordinat titik);
void nextX(koordinat &titik);
void nextY(koordinat &titik);
float jarakDuaTitik(koordinat titikA, koordinat titikB);
void mirrorTitik(koordinat titik);
void geserTitik(koordinat &titik, float x, float y);
float jarakTitikPusat(koordinat titik);

#endif