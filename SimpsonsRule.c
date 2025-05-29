#include <stdio.h>

float simpsons_rule(float x[], float y[], int n) {
    if (n % 2 == 0) {
        printf("Jumlah titik harus ganjil untuk Simpson's Rule (jumlah segmen harus genap).\n");
        return -1;
    } // mengecek apakah jumlah titik adalah ganjil

    float h = x[1] - x[0]; // Asumsi jarak antar titik adalah sama
    float sum = y[0] + y[n - 1]; // Inisialisasi dengan nilai pertama dan terakhir
    // Menggunakan Simpson's Rule

    for (int i = 1; i < n - 1; i++) {
        if (i % 2 == 0)
            sum += 2 * y[i];
        else
            sum += 4 * y[i];
    } // Menambahkan nilai y[i] dengan faktor 2 atau 4 sesuai dengan aturan Simpson

    return (h / 3.0) * sum; // Menghitung jarak total
}

int main() {
    float waktu[] = {0, 2, 4, 6, 8, 10, 12};     // waktu dalam detik
    float kecepatan[] = {0, 4, 8, 10, 7, 3, 0}; // kecepatan dalam m/s
    int n = sizeof(waktu) / sizeof(waktu[0]);

    float jarak = simpsons_rule(waktu, kecepatan, n);
    if (jarak >= 0)
        printf("Jarak tempuh total mobil: %.2f meter\n", jarak);

    return 0;
}
