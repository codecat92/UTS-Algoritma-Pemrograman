#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Mendeklarasikan variabel
    double jariJari, luas;

    // Menampilkan pesan untuk memasukkan jari-jari
    cout << "Masukkan panjang jari-jari lingkaran: ";

    // Mengambil input dari pengguna
    cin >> jariJari;

    // Menghitung luas lingkaran menggunakan rumus π*r^2
    luas = M_PI * pow(jariJari, 2);

    // Menampilkan hasil perhitungan luas lingkaran
    cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << luas << " cm^2" << endl;

    return 0;
}
