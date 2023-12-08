#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi dan inisialisasi data dari tabel
    const int jumlahBaris = 5;
    const int jumlahKolom = 4;

    int nomorItem[] = {1, 2, 3, 4, 5};
    string namaItem[] = {"Table", "Paper", "Envelopes", "Computer", "Book Cases"};
    double hargaItem[] = {1000000, 50000, 15000, 7000000, 150000};
    double discountItem[] = {0.10, 0.0, 0.10, 0.15, 0.05};

    // Input kode lokasi dari pengguna
    int kodeLokasi;
    cout << "Masukkan kode lokasi: ";
    cin >> kodeLokasi;

    // Mengambil data dari tabel berdasarkan kode lokasi
    int index = kodeLokasi - 1;

    // Menampilkan output sesuai permintaan
    cout << "\nOUTPUT:\n";
    cout << "Nama Item: " << namaItem[index] << endl;
    cout << "Harga: " << fixed << setprecision(2) << hargaItem[index] << endl;
    cout << "Discount: " << fixed << setprecision(2) << discountItem[index] * hargaItem[index] << endl;
    
    // Menghitung harga setelah discount
    double hargaSetelahDiscount = hargaItem[index] - (discountItem[index] * hargaItem[index]);
    cout << "Harga setelah discount: " << fixed << setprecision(2) << hargaSetelahDiscount << endl;

    return 0;
}
