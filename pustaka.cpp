#include <iostream>
#include "header.h"

using namespace std;

int luasPersegi(int n){
    int luas = n * n;
    return luas;
}

void isBesar(int n){
    int maxx = 0;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
        if(maxx < i){
            maxx = i;
        }
    }
    cout << "\nBilangan terbesar dari deret adalah : " << maxx << endl; 
}

void isKecil(int n){
    int minn = 1000;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
        if(minn > i){
            minn = i;
        }
    }
    cout << "\nBilangan terkecil dari deret adalah : " << minn << endl; 
}

bool apakahGanjil(int n){
    if(n % 2 != 0){
        return true;
    } else {
        return false;
    }
}

bool apakahGenap(int n){
    if(n % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int toPositif(int n){
    int hasil;
    if(n < 0){
        hasil = n * -1;
    } else if(n == 0){
        hasil = 0;
    } else {
        hasil = n;
    }
    return hasil;
}


int toNegatif(int n){
    int hasil;
    if(n > 0){
        hasil = n * -1;
    } else if(n == 0){
        hasil = 0;
    } else {
        hasil = n;
    }
    return hasil;
}

int sumN(int n){
    int hasil = 0;
    for (int i = 1; i <= n; i++){
        cout << i << " ";
        hasil = i + hasil;
    }
    cout << "\nHasil : ";
    return hasil;
}

float avgN(float n){
    float hasil = 0;
    hasil = sumN(n) / n;
    return hasil;
}