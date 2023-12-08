#include <iostream>

using namespace std;

int main() {
    // Mendeklarasikan variabel
    int jumlahDeret;

    // Meminta input dari pengguna
    cout << "Masukkan Jumlah Deret: ";
    cin >> jumlahDeret;

    // Menampilkan pola deret
    for (int i = 1; i <= jumlahDeret; ++i) {
        // Menampilkan angka dari 1 hingga i
        for (int j = 1; j <= i; ++j) {
            cout << i;
            // Menambahkan tanda '-' jika bukan elemen terakhir
            if (j < i) {
                cout << "-";
            }
        }
        // Menambahkan tanda '+' setelah deret angka
        cout << "+\n";
    }

    return 0;
}


