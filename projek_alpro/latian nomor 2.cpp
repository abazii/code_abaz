#include <iostream>
// Library <cstring> DIHAPUS

using namespace std;

// Batasan maksimum panjang kalimat
const int MAX_PANJANG = 100;

// Deklarasi fungsi untuk memproses dan menampilkan hasil
void tampilkanKalimatTerbalik(char kalimatAsli[]);

int main() {
    char kalimat[MAX_PANJANG];

    // --- Input Kalimat di Fungsi Utama/Main ---
    cout << "kalimat = ";
    cin.getline(kalimat, MAX_PANJANG);

    // Memanggil fungsi
    tampilkanKalimatTerbalik(kalimat);

    return 0;
}

// Definisi fungsi untuk memproses dan menampilkan hasil
void tampilkanKalimatTerbalik(char kalimatAsli[]) {
    // 1. Hitung panjang kalimat secara manual (Menggantikan strlen)
    int inlength = 0; // Menggunakan 'inlength' sesuai permintaan
    while (kalimatAsli[inlength] != '\0') {
        inlength++;
    }
    
    char hasil[MAX_PANJANG];
    int idx_hasil = 0; // Indeks penulisan ke array 'hasil'
    int akhirKata = inlength;

    // --- Statement Perulangan dan Kondisional ---
    // Loop dari karakter terakhir hingga melewati awal (i = -1)
    for (int i = inlength - 1; i >= -1; i--) { 
        
        // Kondisional: Batas kata ditemukan (spasi atau awal/melewati awal kalimat)
        if (i == -1 || kalimatAsli[i] == ' ') {
            
            // Awal kata adalah posisi setelah spasi (i + 1)
            int awalKata = i + 1;

            // Proses hanya jika ada kata yang valid untuk disalin
            if (akhirKata > awalKata) {
                
                // Tambahkan spasi pemisah secara manual (Menggantikan strcat)
                // Hanya ditambahkan jika 'hasil' sudah berisi sesuatu (idx_hasil > 0)
                if (idx_hasil > 0) {
                    hasil[idx_hasil++] = ' ';
                }
                
                // Menyalin karakter satu kata ke array 'hasil'
                for (int k = awalKata; k < akhirKata; k++) {
                    hasil[idx_hasil++] = kalimatAsli[k];
                }
            }

            // Atur batas akhir kata berikutnya
            akhirKata = i;
        }
    }
    
    // Tambahkan karakter null-terminator di akhir string hasil
    hasil[idx_hasil] = '\0';

    // --- Hasil Dibuat dan Ditampilkan di Function ---
    // Menampilkan hasil dengan format yang diminta.
    cout << "hasil   = " << hasil << endl; 
}
