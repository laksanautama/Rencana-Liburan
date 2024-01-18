#include <iostream>
#include <map>
#include <set>
#include <string>
#include <iomanip>  // Menambahkan library iomanip untuk menggunakan setw

using namespace std;

//----Tidak boleh menambah kode di atas batas ini-----

// Tipe data untuk durasi dan rating tempat wisata
using DurasiRating = pair<int, int>;

// Tipe data untuk menyimpan informasi tempat wisata
using TempatWisataData = map<string, DurasiRating>;

// Menampilkan semua tempat wisata beserta durasi dan rating
map<int, string> nama_obyek;

// Menampilkan semua tempat wisata beserta durasi dan rating
void tampilkanTempatWisata(const TempatWisataData& data) {
    cout << setw(20) << left << "Tempat Wisata" << setw(20) << "Durasi (hari)" << setw(10) << "Rating" << endl;
    cout << "---------------------|-------------------|---------" << endl;


    for (const auto& entry : data) {
        cout << setw(20) << left << entry.first << setw(20) << entry.second.first << setw(10) << entry.second.second << endl;
    }
}
// Menampilkan detail durasi dan rating berdasarkan nama tempat
void tampilkanDetailTempat(const TempatWisataData& data, const string& namaTempat) {
    auto it = data.find(namaTempat);
    if (it != data.end()) {
        cout << "\nDetail Tempat Wisata" << endl;
        cout << "---------------------" << endl;
        cout << "Durasi (hari): " << it->second.first << endl;
        cout << "Rating: " << it->second.second << endl;
    } else {
        cout << "Tempat wisata tidak ditemukan." << endl;
    }
}

int main() {
    TempatWisataData tempatWisata = {
        {"Yeongpyeong Ski Arena", {2, 5}},
        {"Nami Island", {1, 4}},
        {"Alpaca World", {0.5, 4}},  // Mengganti 1/2 dengan 0.5
        {"Lotte World", {0.5, 4}},   // Mengganti 1/2 dengan 0.5
        {"Namsan Tower", {0.5, 5}},  // Mengganti 1/2 dengan 0.5
        {"Cheongpung Cable Car", {1, 4}},
        {"Eco Green Campus", {1.5, 5}},
        {"Songhae Park", {1, 5}}
    };

    char jawaban;
    do {
        // Menampilkan semua tempat wisata
        tampilkanTempatWisata(tempatWisata);
    // Meminta input dari pengguna untuk menampilkan detail tempat
        string namaTempat;
        cout << "\nMasukkan nama tempat wisata yang ingin Anda lihat detailnya: ";
        getline(cin, namaTempat);

        // Menampilkan detail tempat berdasarkan input pengguna
        tampilkanDetailTempat(tempatWisata, namaTempat);

        // Meminta jawaban apakah pengguna ingin melanjutkan
        cout << "\nApakah Anda ingin melihat tempat wisata lain? (y/n): ";
        cin >> jawaban;
        cin.ignore();  // Membersihkan buffer input
    } while (jawaban == 'y' || jawaban == 'Y');

    cout << "Terima kasih. Program selesai." << endl;

return 0;
}
