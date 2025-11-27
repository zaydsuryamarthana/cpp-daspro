#include <iostream>
#include "p5.h"
#include <limits>
#include <cctype>

using namespace std;

void kasus1P5()
{
    int pilihan;
    char restart;
    auto soal1P5 = [&]()
    {
        int nilai;
        cout << "\nProgram Konversi Nilai" << endl;
        cout << "------------------------" << endl;
        do
        {
            cout << "Tabel Ranking Nilai" << endl;
            cout << "-------------------------------" << endl;
            cout << "| Range Nilai  |  Nilai Huruf |" << endl;
            cout << "-------------------------------" << endl;
            cout << "|     =>85     |      A       |" << endl;
            cout << "|  =>80 - <85  |      AB      |" << endl;
            cout << "|  =>70 - <80  |      B       |" << endl;
            cout << "|  =>65 - <70  |      BC      |" << endl;
            cout << "|  =>60 - <65  |      C       |" << endl;
            cout << "|  =>50 - <60  |      D       |" << endl;
            cout << "|  =>0 - <50   |      E       |" << endl;
            cout << "-------------------------------" << endl;

            cout << "Masukkan Nilai anda : ";
            cin >> nilai;
            if (nilai >= 85)
            {
                cout << "Nilai anda adalah A, Pertahankan Nilaimu!\n"
                     << endl;
            }
            else if ((nilai < 85) && (nilai >= 80))
            {
                cout << "Nilai anda adalah AB, Luar biasa!\n"
                     << endl;
            }
            else if ((nilai < 80) && (nilai >= 70))
            {
                cout << "Nilai anda adalah B, Tetap Semangat!\n"
                     << endl;
            }
            else if ((nilai < 70) && (nilai >= 65))
            {
                cout << "Nilai anda adalah BC, Bisa Naik kok!\n"
                     << endl;
            }
            else if ((nilai < 65) && (nilai >= 60))
            {
                cout << "Nilai anda adalah C, Kok turun sih!\n"
                     << endl;
            }
            else if ((nilai < 60) && (nilai >= 50))
            {
                cout << "Nilai anda adalah D, Sayang sekali!\n"
                     << endl;
            }
            else
            {
                cout << "Nilai anda adalah E, Anda gagal\n"
                     << endl;
            }
            cout << "Apakah kamu ingin mengulanginya lagi? [y/n] : ";
            cin >> restart;
        } while ((restart == 'y') || (restart == 'Y'));
    };

    auto soal2P5 = [&]()
    {
        int nilai, temp;
        cout << "\nProgram Must be 10" << endl;
        cout << "--------------------" << endl;
        do
        {
            cout << "Masukkan Nilai Anda\t: ";
            cin >> nilai;
            cout << "-----------------------" << endl;
            if (nilai > 10)
            {
                cout << "------ KETERANGAN ------" << endl;
                cout << "Nilai\t\t: LEBIH DARI 10" << endl;
                temp = nilai - 10;
                cout << "Aksi\t\t: KURANGI " << temp << "!" << endl;
                cout << "Tindakan\t: ";
                cin >> temp;
                nilai = nilai - temp;
                cout << "Hasil\t\t: NILAI " << nilai << endl;
            }
            else if (nilai < 10)
            {
                cout << "------ KETERANGAN ------" << endl;
                cout << "Nilai\t\t: KURANG DARI 10" << endl;
                temp = 10 - nilai;
                cout << "Aksi\t\t: KURANGI " << temp << "!" << endl;
                cout << "Tindakan\t: ";
                cin >> temp;
                nilai = nilai + temp;
                cout << "Hasil\t\t: " << nilai << endl;
            }
            else
            {
                cout << "Nilai anda sudah 10/n" << endl;
            }
            cout << "\nApakah ingin mengulanginya lagi? [y/n] : ";
            cin >> restart;
            cout << '\n';
        } while ((restart == 'y') || (restart == 'Y'));
    };

    auto soal3P5 = [&]()
    {
        int nilai;
        do
        {
            cout << "\nProgram Positive, Negative, Odd or Even" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Masukkan Nilai anda : ";
            cin >> nilai;
            if ((nilai % 2) == 0)
            {
                if (nilai < 0)
                {
                    cout << "\nNilai anda " << nilai << " adalah Negatif," << endl
                         << "Nilai anda Genap\n";
                }
                else
                {
                    cout << "\nNilai anda " << nilai << " adalah Positif," << endl
                         << "Nilai anda Genap\n";
                }
            }
            else if (nilai == 0)
            {
                cout << "\nNilai anda " << nilai << "ZERO\n"
                     << endl;
            }
            else
            {
                if (nilai < 0)
                {
                    cout << "\nNilai anda " << nilai << " adalah Negatif," << endl
                         << "Nilai anda Ganjil\n";
                }
                else
                {
                    cout << "\nNilai anda " << nilai << " adalah Positif," << endl
                         << "Nilai anda Ganjil\n";
                }
            }
            cout << "Apakah kamu ingin mengulanginya? [y/n] : ";
            cin >> restart;
        } while ((restart == 'y') || (restart == 'Y'));
    };

    cout << "\nProgram Nilai" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Konversi Nilai" << endl;
    cout << "2. Must be 10" << endl;
    cout << "3. Nilai Genap & Ganjil" << endl;
    cout << "-----------------------\n"
         << endl;
    cout << "Pilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        soal1P5();
        break;
    case 2:
        soal2P5();
        break;
    case 3:
        soal3P5();
        break;
    default:
        break;
    }
}

void kasus2P5()
{
    double jam, total;
    int kendaraan;
    char restart;
    string kelompok;
    cout << "\n--------------------" << endl;
    cout << "Program Biaya Parkir" << endl;
    cout << "--------------------" << endl;
    do
    {
        cout << "List Biaya Parkir" << endl;
        cout << "1. Motor/Sepeda/Tossa\t: Rp. 3.000/Jam" << endl;
        cout << "2. Mobil\t\t: Rp. 5.000/Jam" << endl;
        cout << "3. Mini Truck/Truck/Bus\t: Rp. 15.000/Jam" << endl;
        cout << "\nKendaraan yang digunakan? [1/2/3] ";
        cin >> kendaraan;
        cout << "Durasi Parkir? [Jam] ";
        cin >> jam;
        cout << "\n-----------------------------------" << endl;
        if (kendaraan == 1)
        {
            if (jam > 12)
            {
                total = 50000;
                kelompok = "Menginap";
            }
            else
            {
                total = jam * 3000;
                kelompok = "Reguler";
            }
        }
        else if (kendaraan == 2)
        {
            if (jam > 12)
            {
                total = 120000;
                kelompok = "Menginap";
            }
            else
            {
                total = jam * 5000;
                kelompok = "Reguler";
            }
        }
        else if (kendaraan == 3)
        {
            if (jam > 8)
            {
                total = 250000;
                kelompok = "Menginap";
            }
            else
            {
                total = jam * 25000;
                kelompok = "Reguler";
            }
        }
        cout << "Biaya parkir kendaraan anda adalah Rp.\t" << total << endl;
        cout << "Kendaraan dikategorikan\t\t\t: " << kelompok << endl;
        cout << "Apakah ingin mengulanginya lagi? [y/n] : ";
        cin >> restart;
    } while ((restart == 'y') || (restart == 'Y'));
}

void kasus3P5()
{
    int harga, pilihan, qty, total, diskon, kembalian, nominal;
    char restart, tindakan;
    string nama, tambahan;

    auto soal1P5 = [&]()
    {
        do
        {
            cout << "\nGreat Sale Sederhana | Program Diskon" << endl;
            cout << "-------------------------------------" << endl;
            cout << "1. VGA PNY GTX 1660Ti 6GB GDDR6\t: Rp. 1.900.000" << endl;
            cout << "2. VGA ASRock RX 6600 8GB GDDR6\t: Rp. 2.000.000" << endl;
            cout << "3. VGA MSI RX 6500 XT 4GB GDDR6\t: Rp. 1.500.000" << endl;
            cout << "4. VGA Zotac RTX 2060 6GB GDDR6\t: Rp. 2.200.000" << endl;
            cout << "\nPilih salah satu produk\t: ";
            cin >> pilihan;
            cout << "Beli berapa produk\t: ";
            cin >> qty;

            if (pilihan == 1)
            {
                nama = "VGA PNY GTX 1660Ti 6GB GDDR6";
                harga = 1900000;
                if ((qty > 2) && (qty <= 5))
                {
                    diskon = (harga * 2) / 100;
                }
                else if ((qty > 5) && (qty <= 10))
                {
                    diskon = (harga * 5) / 100;
                }
                else if ((qty > 10) && (qty <= 17))
                {
                    diskon = (harga * 10) / 100;
                }
                else if (qty >= 18)
                {
                    diskon = (harga * 20) / 100;
                }
                else
                {
                    diskon = 0;
                }
            }
            else if (pilihan == 2)
            {
                nama = "VGA ASRock RX 6600 8GB GDDR6";
                harga = 2000000;
                if ((qty > 2) && (qty <= 5))
                {
                    diskon = (harga * 2) / 100;
                }
                else if ((qty > 5) && (qty <= 10))
                {
                    diskon = (harga * 5) / 100;
                }
                else if ((qty > 10) && (qty <= 17))
                {
                    diskon = (harga * 10) / 100;
                }
                else if (qty >= 18)
                {
                    diskon = (harga * 20) / 100;
                }
                else
                {
                    diskon = 0;
                }
            }
            else if (pilihan == 3)
            {
                nama = "VGA MSI RX 6500 XT 4GB GDDR6";
                harga = 1500000;
                if ((qty > 2) && (qty <= 5))
                {
                    diskon = (harga * 2) / 100;
                }
                else if ((qty > 5) && (qty <= 10))
                {
                    diskon = (harga * 5) / 100;
                }
                else if ((qty > 10) && (qty <= 17))
                {
                    diskon = (harga * 10) / 100;
                }
                else if (qty >= 18)
                {
                    diskon = (harga * 20) / 100;
                }
                else
                {
                    diskon = 0;
                }
            }
            else if (pilihan == 4)
            {
                nama = "VGA Zotac RTX 2060 6GB GDDR6";
                harga = 2200000;
                if ((qty > 2) && (qty <= 5))
                {
                    diskon = (harga * 2) / 100;
                }
                else if ((qty > 5) && (qty <= 10))
                {
                    diskon = (harga * 5) / 100;
                }
                else if ((qty > 10) && (qty <= 17))
                {
                    diskon = (harga * 10) / 100;
                }
                else if (qty >= 18)
                {
                    diskon = (harga * 20) / 100;
                }
                else
                {
                    diskon = 0;
                }
            }
            else
            {
                cout << "Input tidak ditemukan, ulangi kembali!" << endl;
            }
            total = (harga - diskon);
            cout << "\n--------------------------" << endl;
            cout << "Nota Pembayaran Great Sale" << endl;
            cout << "--------------------------" << endl;
            cout << "Nama Barang\t: " << nama << endl;
            cout << "Harga\t\t: Rp. " << harga << endl;
            cout << "Qty\t\t: " << qty << endl;
            cout << "Diskon\t\t: Rp. " << diskon << endl;
            cout << "Total\t\t: Rp. " << total << endl;
            cout << "\nApakah kamu ingin mengulanginya lagi [y/n] : ";
            cin >> restart;
        } while ((restart == 'y') || (restart == 'Y'));
    };

    auto soal2P5 = [&]()
    {
        cout << "\nGreat Sale Advanced | Program Diskon" << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Kertas PAPER A4 80 gram" << endl;
        cout << "2. Tinta Warna EPSON INKQ" << endl;
        cout << "3. Flashdisk SUNDRIVE 64GB" << endl;
        do
        {
            cout << "\nPilih salah satu produk : ";
            cin >> pilihan;
            if (pilihan == 1)
            {
                nama = "Kertas PAPER A4 80 gram";
                harga = 55000;
            }
            else if (pilihan == 2)
            {
                nama = "Tinta Warna EPSON INKQ";
                harga = 125000;
            }
            else if (pilihan == 3)
            {
                nama = "Flashdisk SUNDRIVE 64GB";
                harga = 180000;
            }
            else
            {
                cout << "Produk tidak ditemukan, silahkan ulangi kembali." << endl;
            }
            cout << "\nDetail Produk" << endl;
            cout << "-------------" << endl;
            cout << "Nama Barang\t: " << nama << endl;
            cout << "Harga\t\t: " << harga << endl;
            cout << "\nApakah kamu ingin membeli produk ini? ";
            cin >> tindakan;
            if ((tindakan == 'y') || (tindakan == 'Y'))
            {
                cout << "Masukkan jumlah produk : ";
                cin >> qty;
                if (pilihan == 1)
                {
                    total = harga * qty;
                    if ((qty > 2) && (qty <= 5))
                    {
                        diskon = (harga * 5) / 100;
                    }
                    else if ((qty > 5) && (qty <= 10))
                    {
                        diskon = (harga * 10) / 100;
                    }
                    else if ((qty > 10) && (qty <= 15))
                    {
                        diskon = (harga * 15) / 100;
                    }
                    else if (qty > 15)
                    {
                        diskon = (harga * 20) / 100;
                        tambahan = "Free Boba Milk Tea";
                    }
                    else
                    {
                        diskon = 0;
                    }
                }
                else if (pilihan == 2)
                {
                    total = harga * qty;
                    if ((qty >= 3) && (qty <= 10))
                    {
                        diskon = (harga * 10) / 100;
                        tambahan = "Free 1 Tinta Warna Hitam";
                    }
                    else if (qty > 10)
                    {
                        diskon = (harga * 20) / 100;
                        diskon = diskon + 2000;
                    }
                    else
                    {
                        diskon = 0;
                    }
                }
                else if (pilihan == 3)
                {
                    total = harga * qty;
                    if (total > 1800000)
                    {
                        diskon = 250000;
                        tambahan = "Free 1 Mini Bag";
                    }
                    else if (total > 5000000)
                    {
                        diskon = 750000;
                        tambahan = "Free 1 Reguler Bag & Gantungan Kunci";
                    }
                    else
                    {
                        diskon = 0;
                    }
                }
                cout << "\n------------------------------------" << endl;
                cout << "Nota Pembayaran | Program Great Sale" << endl;
                cout << "------------------------------------" << endl;
                cout << "Nama Barang\t: " << nama << endl;
                cout << "Harga\t\t: Rp. " << harga << endl;
                cout << "Qty\t\t: " << qty << endl;
                cout << "Diskon\t\t: Rp. " << diskon << endl;
                cout << "Total\t\t: Rp. " << total << endl;
                do
                {
                    cout << "Nominal\t\t: Rp. ";
                    cin >> nominal;
                    cout << "Kembalian\t: Rp. " << (kembalian = nominal - total) << endl;
                    cout << "\nBONUS\t: " << tambahan << endl;
                    cout << "-------------------------------------" << endl;
                    cout << "TERIMA KASIH SUDAH BERBELANJA" << endl;
                } while (nominal < total);
            }
            else
            {
                cout << "\nBaik, memunculkan list produk." << endl;
            }
        } while ((tindakan == 'N') || (tindakan == 'n'));
    };

    cout << "\nProgram If Else Studi Kasus Diskon" << endl;
    cout << "----------------------------------" << endl;
    cout << "1. Great Sale Sederhana" << endl;
    cout << "2. Great Sale Advanced" << endl;
    cout << "0. Kembali" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        soal1P5();
        break;
    case 2:
        soal2P5();
        break;
    default:
        break;
    }
}

void sistemP5()
{
    int pilihan;
    cout << "---------------------------------------" << endl;
    cout << "Pertemuan 5 : Analisis Kondisi Advanced" << endl;
    cout << "---------------------------------------" << endl;
    do
    {
        cout << "\nProgram Pertemuan 5 :" << endl;
        cout << "------------------------------" << endl;
        cout << "1. Konversi & Keterangan Nilai" << endl;
        cout << "2. Biaya Parkir" << endl;
        cout << "3. Diskon Produk" << endl;
        cout << "------------------------------" << endl;
        cout << "0. Kembali\n " << endl;
        cout << "Pilih salah satu program : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            kasus1P5();
            break;
        case 2:
            kasus2P5();
            break;
        case 3:
            kasus3P5();
            break;
        default:
            break;
        }

    } while (pilihan != 0);
}
