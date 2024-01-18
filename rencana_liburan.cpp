#include <map>
#include <set>
#include <string>

using namespace std;

//----Tidak boleh menambah kode di atas batas ini-----

map<int, string> nama_obyek;

void kombinasi_obyek_wisata(){
         // Tipe data untuk durasi dan rating tempat wisata
using DurasiRating = pair<int, int>;

// Tipe data untuk menyimpan informasi tempat wisata
using TempatWisataData = map<string, DurasiRating>;

// Menampilkan semua tempat wisata beserta durasi dan rating
void tampilkanTempatWisata(const TempatWisataData& data) {
    cout << setw(20) << left << "Tempat Wisata" << setw(20) << "Durasi (hari)" << setw(10) << "Rating" << endl;
    cout << "---------------------|-------------------|---------" << endl;


}


int main(){

return 0;
}
